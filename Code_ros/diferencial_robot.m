classdef diferencial_robot < dynamicprops
    %diferencial_robot 
    %   

    methods(Static)
        
        function  [w_vec]= transformar_robot2wordl(w_xi,theta,r_vec)
            % w_xi  => [x,y,z] del robot
            % theta => angulo robot
            % r_vec =>  x , y , z del vector a transformar 
            R = [cos(theta), -sin(theta), 0; 
                 sin(theta), cos(theta),  0; 
                          0,          0,  1];
                      
            w_vec = R*r_vec + w_xi;
        end
        
        function  [r_vec]= transformar_wordl2robot(w_xi,w_vec,theta)
            % wxi => [x,y,z] del robot en el mundo 
            % vec =>  x , y , z del vector a transformar 

            
            R = [cos(theta),  sin(theta), 0; 
                 -sin(theta), cos(theta),  0; 
                          0,          0,  1];
                      
            r_vec = R*(w_vec-w_xi);
        end
        
        function  [tetha]= quaternion2angulo(quaternion_orientacion)
            % quaternion contiene x,y,z,w  de la orientacion
            
            w = quaternion_orientacion.W;
            z = quaternion_orientacion.Z;
            x = quaternion_orientacion.X;
            y = quaternion_orientacion.Y;
            tetha = atan2(2.0*(w*z + x*y), 1.0 - 2.0*(y^2 + z^2));
        end
        
    end
end

