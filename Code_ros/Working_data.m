%% Cargar datos guardados

load('Code_ros/Imagenes.mat')

%% Analisis imagenes

%figure(1)
%imshow(depth(img).readImage())

for img = 1:6
    [z,x,cx,cy]= calculo_depth(rgb(img),depth(img),yolov3Detector);
    Im_RGB = insertShape(rgb(img).readImage(),'circle',[cx cy 10],'LineWidth',5);
    Im_RGB = insertText(Im_RGB,[0,0],['x:',num2str(x),'m z:',num2str(z),'m'],'FontSize',30);

    figure(2)
    imshow(Im_RGB)
    pause(1)
end

function [depth,Xm,Xc,Yc]= calculo_depth(rgbCamMsg,rgbD1Msg,yolov)
    Im_RGB =rgbCamMsg.readImage(); 
    Im_Depth = rgbD1Msg.readImage();

    
    [bboxes,~,~] = detect(yolov,Im_RGB);

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
    
end
