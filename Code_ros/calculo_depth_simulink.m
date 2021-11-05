function [depth,Xm,Xc,Yc]= calculo_depth_simulink(bboxes,Im_Depth)

    if(bboxes(1,3) >0)
        

        Im_Depth_box = Im_Depth(bboxes(1,2):bboxes(1,2)+bboxes(1,4),bboxes(1,1):bboxes(1,1)+bboxes(1,3),:)/5;

        
        % Quitar valores NaN de la imagen
        Im_Depth_box(isnan(Im_Depth_box)) = 0;


        [counts,~] = imhist(Im_Depth_box);

        [~,posicion] = max(counts(2:end-1));
        posicion = posicion/255;

        lim = 0.01;
        Immask = Im_Depth_box.*(Im_Depth_box < posicion+lim); 
        Immask = Immask.*(Immask > posicion-lim); 

        BW = Immask>0;


        stats = regionprops(BW,'Centroid','Area');
        
        Centroid_x = 0;
        Centroid_y = 0;
        acum_area = 0;
        for stat = 1:size(stats,1)
           Centroid_x = stats(stat).Centroid(1)*stats(stat).Area(1) + Centroid_x; 
           Centroid_y = stats(stat).Centroid(2)*stats(stat).Area(1) + Centroid_y;
           acum_area  = stats(stat).Area(1)+ acum_area;
            
        end
        %centroide = [(stats.Centroid(:,1)'*stats.Area(:))/sum(stats.Area(:)) (stats.Centroid(:,2)'*stats.Area(:))/sum(stats.Area(:))];
        centroide = [Centroid_x/acum_area  Centroid_y/acum_area];
        [puntos_y,puntos_x] = ind2sub(size(Im_Depth_box),find(BW));
        
        if(~isnan(centroide(1)) && ~isnan(centroide(2)))
        
            [~,posicion]= min((puntos_x -centroide(1)).^2 + (puntos_y -centroide(2)).^2);

            centroide_final = [puntos_x(posicion),puntos_y(posicion)];

            Im_Depth_box = Im_Depth(bboxes(1,2):bboxes(1,2)+bboxes(1,4),bboxes(1,1):bboxes(1,1)+bboxes(1,3),:);
            depth = double(Im_Depth_box(centroide_final(2),centroide_final(1)));
            Xc = double(centroide_final(1)+bboxes(1,1));
            Yc = double(centroide_final(2)+bboxes(1,2));
            Xm = double((Xc/(size(Im_Depth,2))-1/2)*depth)*-1.6077;
        else
            depth= NaN;
            Xm= NaN;
            Xc= NaN;
            Yc= NaN;
        end

        %Im_RGB = insertShape(Im_RGB,'circle',[centroide_final(1) centroide_final(2) 10],'LineWidth',5);
    else
        depth= NaN;
        Xm= NaN;
        Xc= NaN;
        Yc= NaN;
    end

end