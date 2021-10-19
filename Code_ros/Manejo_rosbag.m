%% Lectura rosbag

bag = rosbag('Rosbags/2021-10-18-14-42-35.bag');

%bagselect = select(bag,"Topic",{'/robot1/camera/rgb/image_raw' ,'/robot1/camera/depth/image_raw', '/robot1/odom', '/robot2/odom'});

bagOdomrobot1 = select(bag,"Topic",{ '/robot1/odom'});
msgsOdomrobot1 = readMessages(bagOdomrobot1);
bagOdomrobot2 = select(bag,"Topic",{ '/robot2/odom'});
msgsOdomrobot2 = readMessages(bagOdomrobot2);
bagrgbcam = select(bag,"Topic",{ '/robot1/camera/rgb/image_raw'});
msgsrgbcam = readMessages(bagrgbcam);
bagdepthcam = select(bag,"Topic",{ '/robot1/camera/depth/image_raw'});
msgsdepthcam  = readMessages(bagdepthcam);

Lista_odom_robot_1 = bagOdomrobot1.MessageList;
Lista_odom_robot_2 = bagOdomrobot2.MessageList;
Lista_rgbcam = bagrgbcam.MessageList;
Lista_depthcam = bagdepthcam.MessageList;

%% 

Tiempo = Lista_odom_robot_1.Time;
Tiempo = [Tiempo; Lista_odom_robot_2.Time];
Tiempo = [Tiempo; Lista_rgbcam.Time];
Tiempo = [Tiempo; Lista_depthcam.Time];

Tiempo = unique(sort(Tiempo));


Tiempo_actual = Tiempo(1);
iter = 1;
cont = 1;
flag = 0;
while(iter<length(Tiempo))
    pos_odom_robot_1 = find(Lista_odom_robot_1.Time == Tiempo_actual);
    pos_odom_robot_2 = find(Lista_odom_robot_2.Time == Tiempo_actual);
    pos_rgbcam = find(Lista_rgbcam.Time == Tiempo_actual);
    pos_depthcam = find(Lista_depthcam.Time == Tiempo_actual);
    
    if(~isempty(pos_odom_robot_1))
            Odom = msgsOdomrobot1(pos_odom_robot_1);
            Odom = Odom{1};
            Pose = Odom.Pose.Pose.Position;
            Orientacion= Odom.Pose.Pose.Orientation;
            tetha = diferencial_robot.quaternion2angulo(Orientacion);
            robot_pose= [Pose.X;Pose.Y;Pose.Z];
            
            %figure(2)
            %plot(robot_pose(1),robot_pose(2),'r*')
            %hold on
            
    end
    if(~isempty(pos_odom_robot_2))
            Odom = msgsOdomrobot2(pos_odom_robot_2);
            Odom = Odom{1};
            Pose = Odom.Pose.Pose.Position;
            Orientacion= Odom.Pose.Pose.Orientation;
            tetha2 = diferencial_robot.quaternion2angulo(Orientacion);
            robot_pose2= [Pose.X;Pose.Y;Pose.Z];
            
            
            %figure(2)
            %plot(robot_pose2(1),robot_pose2(2),'b*')
            %hold on
            
    end
    
    if(~isempty(pos_rgbcam))
            rgbCamMsg =  msgsrgbcam(pos_rgbcam);
            rgbCamMsg = rgbCamMsg{1};
            Img_rgb = (rgbCamMsg.readImage());
            flag = 1;
    end
    
    if(~isempty(pos_depthcam))
            DeapthCamMsg = msgsdepthcam(pos_depthcam);
            DeapthCamMsg = DeapthCamMsg{1};
            Img_depth = DeapthCamMsg.readImage();
            
    end
    

    
    
    if(flag)
        flag = 0;
        [x,y,cx,cy]= calculo_depth(Img_rgb,Img_depth,yolov3Detector);
        if(~isnan(cx) || ~isnan(cy))
            Im_RGB = insertShape(Img_rgb,'circle',[cx cy 10],'LineWidth',5);
            
            [w_vec]= diferencial_robot.transformar_robot2wordl(robot_pose,tetha,[x;y;0]);
            r_vec_aux= diferencial_robot.transformar_wordl2robot(robot_pose,robot_pose2,tetha);
            r_vec(cont,1)= r_vec_aux(1);
            r_vec(cont,2)= r_vec_aux(2);
            r_vec_exp(cont,:)= [x,y];
            temp(cont)= Tiempo_actual;
            cont = cont+1;
            
            
            figure(2)
            plot(robot_pose2(1),robot_pose2(2),'b*')
            hold on
            plot(robot_pose(1),robot_pose(2),'r*')
            hold on
            plot(w_vec(1),w_vec(2),'c*')
            hold on
            title(num2str(iter))
            xlim([-10,10])
            ylim([-10,10])
            %Im_RGB = insertText(Im_RGB,[0,0],['x:',num2str(x),'m z:',num2str(z),'m iter:',num2str(iter)],'FontSize',30);
            figure(1)
            
            imshow(Im_RGB)
            
            
        else
            Im_RGB = insertText(Img_rgb,[0,0],['x:Nan', 'z: Nan',' iter:',num2str(iter)],'FontSize',30);
        end

    end
    
    iter = iter+1;
    Tiempo_actual= Tiempo(iter);
end

%%
figure(1)
scatter(r_vec(:,1),r_vec_exp(:,1))
title("Eje x experimental vs odom")
figure(2)
scatter(r_vec(:,2),r_vec_exp(:,2))
title("Eje y experimental vs odom")


figure(3)
plot(r_vec(:,1),r_vec(:,2))
title("Trayectoria")
hold on 
plot(r_vec_exp(:,1),r_vec_exp(:,2))


figure(4)
error_dist = sum((r_vec-r_vec_exp).^2, 2);
plot(error_dist)
title("Error en distancia euclidiana")

figure(5)
plot(temp,r_vec(:,1))
title("tiempo vs trayectoria x")
hold on
plot(temp,r_vec_exp(:,1))
legend(["groundtruth","experimental"])
figure(6)
plot(temp,r_vec(:,2))
title("tiempo vs trayectoria y")
hold on
plot(temp,r_vec_exp(:,2))
legend(["groundtruth","experimental"])
%%

x_reg = r_vec_exp(:,2);
y_reg = r_vec(:,2);

x_reg = [ones(length(x_reg),1) x_reg];

tetha = x_reg \ y_reg;

figure(1)
scatter(r_vec_exp(:,2),r_vec(:,2))
title("Eje y experimental vs odom")
figure(2)
scatter(r_vec_exp(:,2)*tetha(2),r_vec(:,2))
title("Eje y experimental vs odom regresion")

