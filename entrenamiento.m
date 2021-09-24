%% Lectura de datos
data = load('Imagenes_label/label_imagenes.mat');

label_box = data.gTruth.LabelData;
direcciones= cell2table(data.gTruth.DataSource.Source);

dataset_turtle= table(direcciones.Var1(:),label_box.Turtle(:), 'VariableNames',{'Image_file','Box_label'});

imdsTrain = imageDatastore(dataset_turtle.Image_file);
bldsTrain = boxLabelDatastore(dataset_turtle(:,2:end));

trainingData = combine(imdsTrain, bldsTrain);


%%
networkInputSize = [1920 1080 3];

rng(0)
numAnchors = 6;
[anchors, meanIoU] = estimateAnchorBoxes(trainingData, numAnchors);

area = anchors(:, 1).*anchors(:, 2);
[~, idx] = sort(area, 'descend');
anchors = anchors(idx, :);
anchorBoxes = {anchors(1:3,:)
    anchors(4:6,:)
    };

baseNetwork = squeezenet;
classNames = dataset_turtle.Properties.VariableNames(2:end);

yolov3Detector = yolov3ObjectDetector(baseNetwork, classNames, anchorBoxes, 'DetectionNetworkSource', {'fire9-concat', 'fire5-concat'});
%%
numEpochs = 80;
miniBatchSize = 8;
learningRate = 0.001;
warmupPeriod = 1000;
l2Regularization = 0.0005;
penaltyThreshold = 0.5;
velocity = [];
dispatchInBackground = false;

mbqTrain = minibatchqueue(trainingData, 2,...
        "MiniBatchSize", miniBatchSize,...
        "MiniBatchFcn", @(images, boxes, labels) createBatchData(images, boxes, labels, classNames), ...
        "MiniBatchFormat", ["SSCB", ""],...
        "DispatchInBackground", dispatchInBackground,...
        "OutputCast", ["", "double"]);

%%

function data = preprocessData(data, targetSize)
% Resize the images and scale the pixels to between 0 and 1. Also scale the
% corresponding bounding boxes.

for ii = 1:size(data,1)
    I = data{ii,1};
    imgSize = size(I);
    
    % Convert an input image with single channel to 3 channels.
    if numel(imgSize) < 3 
        I = repmat(I,1,1,3);
    end
    bboxes = data{ii,2};

    I = im2single(imresize(I,targetSize(1:2)));
    scale = targetSize(1:2)./imgSize(1:2);
    bboxes = bboxresize(bboxes,scale);
    
    data(ii, 1:2) = {I, bboxes};
end
end