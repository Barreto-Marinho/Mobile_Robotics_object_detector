
for i = 1:352
    try
        yolov3Detector = load("D:\Documentos\8tvo_semestre\Robotica_movil\Proyecto\Proyecto_robotica_movil\Red_entrenada\box_30_r.mat").yolov3Detector;
        I = imread("D:\Documentos\8tvo_semestre\Robotica_movil\Proyecto\Proyecto_robotica_movil\Imagenes_ultimas\Imagen"+num2str(i)+".png");
        [bboxes,scores,labels] = detect(yolov3Detector,I);
        if(size(bboxes,1)>0)
            % Display the detections on image.
            I = insertObjectAnnotation(I,'rectangle',bboxes,scores);
        end
        figure(1)
        imshow(I)
        title("Imagen"+num2str(i))
    catch ME 

    end
end
%%


data = load('Imagenes_label/label_imagenes_ultimo.mat');
label_box = data.gTruth.LabelData;
currentPathDataSource = "/home/andres/Proyecto_robotica/Proyecto_robotica_movil/Imagenes_ultimas/";
newPathDataSource = "D:\Documentos\8tvo_semestre\Robotica_movil\Proyecto\Proyecto_robotica_movil\Imagenes_ultimas";
alternativePaths = {[currentPathDataSource newPathDataSource]};
unresolvedPaths = changeFilePaths(data.gTruth,alternativePaths);
%%
data = load('Imagenes_label/imageLabelingSession_ultima.mat');
currentPathDataSource = "/home/andres/Proyecto_robotica/Proyecto_robotica_movil/Imagenes_ultimas/";
newPathDataSource = "D:\Documentos\8tvo_semestre\Robotica_movil\Proyecto\Proyecto_robotica_movil\Imagenes_ultimas";
alternativePaths = {[currentPathDataSource newPathDataSource]};
unresolvedPaths = changeFilePaths(data.imageLabelingSession,alternativePaths);
%unresolvedPaths = changeFilePaths(data.imageLabelingSession.FileName,alternativePaths);

archivos = data_2.data;

%%

for i = 1:10:1249
    imag = out.simout.signals.values(:,:,:,i);
    imwrite(imag,"D:\Documentos\8tvo_semestre\Robotica_movil\Proyecto\Proyecto_robotica_movil\Imagenes_ultimas\img_5"+num2str(i)+".png")
end