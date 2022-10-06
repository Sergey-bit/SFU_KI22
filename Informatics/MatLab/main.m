V = 42;
rng(V);

A = [1:150] + randi([0 1], 1, 150);
A(mod(A, 2) == 0) = 0;

%% 3
r =  -1 + 2 * rand(1, 70 * V);
f = @(t) length(r(r < t));

X = -1:0.05:1;

plot(X, arrayfun(f, X));

xlabel("X");
ylabel("Y");

grid on;
hold off;

title("title");
print("3.png");

%% 4
x = rand(20 + V, 4);
y = rand(20 + V, 4);

plot(x, y, "+-");

axis square;
print("4.png");

%% 5
x = rand(20 + V, 3);
y = rand(20 + V, 3);
z = rand(20 + V, 3);

plot3(x, y, z, "-p");
print("5.png");

%% 6
clf;
x = 0: pi / 50:2 * pi * (3 + V);
polar(x, x, "k-.");

print("6.png");

%% 7
[x, y] = meshgrid(-3:0.1:3, -3:0.1:3);
z = cos(V * 0.5 * x) * x * x - y * y * y

xlabel("X");
ylabel("Y");
zlabel("Z");

mesh(x, y, z);
print("7_1.png");

xlabel("X");
ylabel("Y");
zlabel("Z");

surf(x, y, z);
print("7_2.png");

%% 11

bar(flip_stats(9 * V, 987 + V) ./  (987 + V));

xlabel("X");
ylabel("Y");

print("11.png");

