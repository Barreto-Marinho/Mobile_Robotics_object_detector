%% Connect to ROS network and load nural network
rosshutdown;
rosinit('127.0.1.1');
node = ros.Node('/percepcion');
frec = 10;
%%
r = ros.Rate(node,frec);
%%
yolov3Detector = load('Red_entrenada/Red_1_empty_world.mat').yolov3Detector;
%%
yolov3Detector = load('Red_entrenada/Red_1_empty_world.mat');
%%
%clear node 
%rosshutdown;
%rosinit('127.0.1.1');



rgbCamSub = rossubscriber('/robot1/camera/rgb/image_raw');

DeapthCamsub = rossubscriber('/robot1/camera/depth/image_raw');

odometria = rossubscriber('/robot1/odom');

show_flag = 0;

reset(r)

for i = 1:1000
	rgbCamMsg = rgbCamSub.LatestMessage;
    DeapthCamMsg = DeapthCamsub.LatestMessage;
    Odom = odometria.LatestMessage;
    
    if(~isempty(rgbCamMsg) && ~isempty(DeapthCamMsg))
       
        [z,x,cx,cy]= calculo_depth(rgbCamMsg,DeapthCamMsg,yolov3Detector);
        disp(['x:',num2str(x),'m z:',num2str(z),'m iter:',num2str(i)])
        if(show_flag)
            Im_RGB = insertShape(rgbCamMsg.readImage(),'circle',[cx cy 10],'LineWidth',5);
            Im_RGB = insertText(Im_RGB,[0,0],['x:',num2str(x),'m z:',num2str(z),'m iter:',num2str(i)],'FontSize',30);
            figure(1)
            imshow(Im_RGB)
        end
        
    else 
        z = NaN;
        x = NaN;
        disp("No se tiene imagen")
    end
    %disp([i,z,x])
    
	waitfor(r);
end


function [depth,Xm,Xc,Yc]= calculo_depth(rgbCamMsg,rgbD1Msg,yolov)
    Im_RGB =rgbCamMsg.readImage(); 
    Im_Depth = rgbD1Msg.readImage();

    
    [bboxes,~,~] = detect(yolov,Im_RGB);
    if(~isempty(bboxes))

        Im_Depth_box = Im_Depth(bboxes(2):bboxes(2)+bboxes(4),bboxes(1):bboxes(1)+bboxes(3),:)/5;

        % Quitar valores NaN de la imagen
        Im_Depth_box(isnan(Im_Depth_box)) = 0;


        [counts,~] = imhist(Im_Depth_box);

        [~,posicion] = max(counts(2:end-1));
        posicion = posicion/255;

        lim = 0.01;
        Immask = Im_Depth_box.*(Im_Depth_box < posicion+lim); 
        Immask = Immask.*(Immask > posicion-lim); 

        BW = Immask>0;


        stats = regionprops('table',BW,'Centroid','Area');
        centroide = [(stats.Centroid(:,1)'*stats.Area(:))/sum(stats.Area(:)) (stats.Centroid(:,2)'*stats.Area(:))/sum(stats.Area(:))];

        [puntos_y,puntos_x] = ind2sub(size(Im_Depth_box),find(BW));

        [~,posicion]= min((puntos_x -centroide(1)).^2 + (puntos_y -centroide(2)).^2);

        centroide_final = [puntos_x(posicion),puntos_y(posicion)];

        Im_Depth_box = Im_Depth(bboxes(2):bboxes(2)+bboxes(4),bboxes(1):bboxes(1)+bboxes(3),:);
        depth = Im_Depth_box(centroide_final(2),centroide_final(1));
        Xc = centroide_final(1)+bboxes(1);
        Yc = centroide_final(2)+bboxes(2);
        Xm = (Xc/(size(Im_Depth,2))-1/2)*depth;


        centroide_final = centroide_final+ [bboxes(1),bboxes(2)];

        %Im_RGB = insertShape(Im_RGB,'circle',[centroide_final(1) centroide_final(2) 10],'LineWidth',5);
    else
        depth= NaN;
        Xm= NaN;
        Xc= NaN;
        Yc= NaN;
    end

end
    

