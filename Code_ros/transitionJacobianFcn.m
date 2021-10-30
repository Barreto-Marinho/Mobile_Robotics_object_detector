function [jacobiano] = transitionJacobianFcn(x)

delta_t = 0.01;
% x(1)=> x(k)
% x(2)=> y(k)
% x(3)=> theta(k)
% x(4)=> v(k)
% x(5)=> w(k)

jacobiano = [[1,0,-x(4)*sin(x(3))*delta_t,cos(x(3))*delta_t,      0];...
             [0,1,-x(4)*cos(x(3))*delta_t,sin(x(3))*delta_t,      0];...
             [0,0,                      1,                0,delta_t];...
             [0,0,                      0,                1,      0];...
             [0,0,                      0,                0,      1]];
end

