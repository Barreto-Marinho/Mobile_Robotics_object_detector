classdef yolov3 < matlab.System
    % Untitled Add summary here
    %
    % NOTE: When renaming the class name Untitled, the file name
    % and constructor name must be updated to use the class name.
    %
    % This template includes most, but not all, possible properties, attributes,
    % and methods that you can implement for a System object in Simulink.

    % Public, tunable properties
    properties
    end

    % Public, non-tunable properties
    properties(Nontunable)
        yolov
    end

    properties(DiscreteState)
        
    end

    % Pre-computed constants
    properties(Access = private)

    end

%     methods
%         % Constructor
%         function obj = yolov3(varargin)
% 
%         end
%     end

    methods(Access = protected)
        function setupImpl(obj)
            % Perform one-time calculations, such as computing constants
            obj.yolov = load('Red_entrenada/prueba_anchor_10.mat').yolov3Detector;
        end

        function bboxes = stepImpl(obj,Im_RGB)
            [bboxes,~,label] = detect(obj.yolov,Im_RGB);
            if(size(bboxes,1) == 0)
                bboxes = single([[0,0,0,0];[0,0,0,0];[0,0,0,0]]);
            elseif(size(bboxes,1)==1)
                vec = [bboxes(1,1),bboxes(1,2),bboxes(1,3),bboxes(1,4)];
                if(label(1)=="Box_label")
                    bboxes = single([[0,0,0,0];vec;[0,0,0,0]]);
                else
                    bboxes = single([vec;[0,0,0,0];[0,0,0,0]]); 
                end
            elseif(size(bboxes,1)==2)
                if(label(1)=="Turtle_label")
                    bboxes = single([[bboxes(1,1),bboxes(1,2),bboxes(1,3),bboxes(1,4)];...
                                [bboxes(2,1),bboxes(2,2),bboxes(2,3),bboxes(2,4)];[0,0,0,0]]);
                elseif(label(2)=="Turtle_label")
                    bboxes = single([[bboxes(2,1),bboxes(2,2),bboxes(2,3),bboxes(2,4)];...
                                [bboxes(1,1),bboxes(1,2),bboxes(1,3),bboxes(1,4)];[0,0,0,0]]);
                else
                    bboxes = single([[0,0,0,0];[bboxes(2,1),bboxes(2,2),bboxes(2,3),bboxes(2,4)];...
                                [bboxes(1,1),bboxes(1,2),bboxes(1,3),bboxes(1,4)]]);
                end
            else
                if(label(1)=="Turtle_label")
                    bboxes = single([[bboxes(1,1),bboxes(1,2),bboxes(1,3),bboxes(1,4)];...
                                    [bboxes(2,1),bboxes(2,2),bboxes(2,3),bboxes(2,4)];...
                                    [bboxes(3,1),bboxes(3,2),bboxes(3,3),bboxes(3,4)]]);
                elseif(label(2)=="Turtle_label")
                    bboxes = single([[bboxes(2,1),bboxes(2,2),bboxes(2,3),bboxes(2,4)];...
                                    [bboxes(1,1),bboxes(1,2),bboxes(1,3),bboxes(1,4)];...
                                    [bboxes(3,1),bboxes(3,2),bboxes(3,3),bboxes(3,4)]]);
                else
                    bboxes = single([[bboxes(3,1),bboxes(3,2),bboxes(3,3),bboxes(3,4)];...
                                    [bboxes(1,1),bboxes(1,2),bboxes(1,3),bboxes(1,4)];...
                                    [bboxes(2,1),bboxes(2,2),bboxes(2,3),bboxes(2,4)]]);
                end
            end

        end
        
        function out = getOutputSizeImpl(obj)
            % Return size for each output port
            out = [3 4];

        end
        
        function out = getOutputDataTypeImpl(obj)
            out = "single";
        end

        function resetImpl(obj)
            % Initialize / reset discrete-state properties

        end

        %% Backup/restore functions
        function s = saveObjectImpl(obj)
            % Set properties in structure s to values in object obj

            % Set public properties and states
            s = saveObjectImpl@matlab.System(obj);

            % Set private and protected properties
            %s.myproperty = obj.myproperty;
        end

        function loadObjectImpl(obj,s,wasLocked)
            % Set properties in object obj to values in structure s

            % Set private and protected properties
            % obj.myproperty = s.myproperty; 

            % Set public properties and states
            loadObjectImpl@matlab.System(obj,s,wasLocked);
        end

        %% Simulink functions
        function ds = getDiscreteStateImpl(obj)
            % Return structure of properties with DiscreteState attribute
            ds = struct([]);
        end

        function flag = isInputSizeMutableImpl(obj,index)
            % Return false if input size cannot change
            % between calls to the System object
            flag = false;
        end

        function icon = getIconImpl(obj)
            % Define icon for System block
            icon = mfilename("class"); % Use class name
            % icon = "My System"; % Example: text icon
            % icon = ["My","System"]; % Example: multi-line text icon
            % icon = matlab.system.display.Icon("myicon.jpg"); % Example: image file icon
        end
    end

    methods(Static, Access = protected)
        %% Simulink customization functions
        function header = getHeaderImpl
            % Define header panel for System block dialog
            header = matlab.system.display.Header(mfilename("class"));
        end

        function group = getPropertyGroupsImpl
            % Define property section(s) for System block dialog
            group = matlab.system.display.Section(mfilename("class"));
        end
    end
end
