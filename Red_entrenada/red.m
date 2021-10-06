yolov3Detector = load('Red_entrenada/Red_1_empty_world.mat').yolov3Detector;

% Read the datastore.
I = imread('Imagenes_21_sep/Imagen2.png');
%I = imread('mig_prueba.jpeg');

tic
[bboxes,scores,labels] = detect(yolov3Detector,I);
toc
% Display the detections on image.
I = insertObjectAnnotation(I,'rectangle',bboxes,scores);

figure
imshow(I)


