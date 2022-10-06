#include <iostream>
#include <iomanip>
#include <cmath>
#include <float.h>

double f(double);
double get_dist(double, double, double, double);

int main()
{
	double a, b, h, y, x1, y1, nearx = 0, neary = 0;

	std::cout << "Enter A, B, h >> ";
	std::cin >> a >> b >> h;

	std::cout << "Enter x, y >> ";
	std::cin >> x1 >> y1;

	for (double dist = 0, nearest = DBL_MAX; a <= b; a += h)
	{
		y = f(a);
		dist = get_dist(a, x1, y, y1);

		if (dist < nearest)
		{
			nearest = dist;

			nearx = a;
			neary = y;
		}
	}

	std::cout << "Nearest point >> {" << nearx << ", " << neary << "}" << std::endl;
	std::cin.get(); std::cin.get();

	return 0;
}
double get_dist(double x, double x1, double y, double y1)
{
	return sqrt(pow(x - x1, 2) + pow(y - y1, 2));
}
double f(double x)
{
	return exp(x) - 10.0 * x;
}