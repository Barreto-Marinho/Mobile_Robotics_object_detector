function x = transitionFcn(x)

delta_t = 0.01;

% x(1)=> x(k)
% x(2)=> y(k)
% x(3)=> theta(k)
% x(4)=> v(k)
% x(5)=> w(k)

%x = x+ x*delta_t
x = [x(1)+x(4)*cos(x(3))*delta_t;...
            x(2)+x(4)*sin(x(3))*delta_t;...
            x(3) + x(5)*delta_t;...
            x(4);...
            x(5)];


end

