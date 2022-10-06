#include <iostream>
#include <iomanip>

double f(double);

int main()
{
	double a, b, s;

	std::cout << "Enter a, b, s >> ";
	std::cin >> a >> b >> s;

	for (; a <= b; a += s)
	{
		std::cout.width(10);
		std::cout << std::fixed << a;

		std::cout.width(15);
		std::cout << std::scientific << f(a) << std::endl;
	}

	return 0;
}

double f(double x)
{
	return 2.0 * x * x - 3.0 * x + 1.0;
}