#include <iostream>
#include <iomanip>

double f(double);

void out_x(double, double, double);
void out_y(double, double, double);

int main()
{
	double a, b, s;

	std::cout << "Enter a, b, s >> ";
	std::cin >> a >> b >> s;

	out_x(a, b, s);
	out_y(a, b, s);

	return 0;
}

void out_x(double a, double b, double s)
{
	for (; a <= b; a += s)
	{
		std::cout.width(15);
		std::cout << std::fixed << std::setprecision(3) << a;
	}

	std::cout << std::endl;
}
void out_y(double a, double b, double s)
{
	for (; a <= b; a += s)
	{
		std::cout.width(15);
		std::cout << std::scientific << std::setprecision(5) << f(a);
	}

	std::cout << std::endl;
}
double f(double x)
{
	return 5.0 * x + 2.0;
}