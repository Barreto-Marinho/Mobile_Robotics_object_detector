%% Connect to ROS network
rosshutdown;
rosinit('127.0.1.1');

%% 
yolov3Detector = load('Red_entrenada/Red_1_empty_world.mat').yolov3Detector;

%% Suscribir a la camara y mostrar imagen
rgbCamSub = rossubscriber('/robot1/camera/rgb/image_raw');
rgbCamMsg = rgbCamSub.LatestMessage;

rgbD1sub = rossubscriber('/robot1/camera/depth/image_raw');
rgbD1Msg = rgbD1sub.LatestMessage;

rgbD2sub = rossubscriber('/robot1/camera/depth/points');
rgbD2Msg = rgbD2sub.LatestMessage;


%img = rgbCamMsg.readImage();
%figure;
%imshow(img);

%%
rostopic list
%% Lectura imagen rgb

Im_RGB =rgbCamMsg.readImage(); 
Im_Depth = rgbD1Msg.readImage();

[bboxes,scores,labels] = detect(yolov3Detector,rgbCamMsg.readImage());

%Im_RGB = insertObjectAnnotation(Im_RGB,'rectangle',bboxes,scores);
%Im_Depth = insertObjectAnnotation(Im_Depth,'rectangle',bboxes,scores);

Im_RGB_box = Im_RGB(bboxes(2):bboxes(2)+bboxes(4),bboxes(1):bboxes(1)+bboxes(3),:);
Im_Depth_box = Im_Depth(bboxes(2):bboxes(2)+bboxes(4),bboxes(1):bboxes(1)+bboxes(3),:);


[counts,binLocations] = imhist(Im_Depth_box);

figure(3)
plot(binLocations,counts)


figure(1)
imshow(Im_RGB_box)
figure(2)
imshow(Im_Depth_box)
