#include <iostream>
#include <iomanip>

double f(double);

int main()
{
	double a, b, s, scale;

	std::cout << "Enter a, b, s, scale >> ";
	std::cin >> a >> b >> s >> scale;

	for (double y = 0; a <= b; a += s)
	{
		y = f(a);

		std::cout << std::cout.fill(' ') << std::cout.width(scale * y);
		std::cout << "$(" << a << ", " << y << ")\n";
	}

	return 0;
}

double f(double x)
{
	static const double pi = acos(-1);

	return pow(sin(pi * x), 2);
}