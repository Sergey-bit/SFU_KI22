#include <iostream>
#include <cmath>

double solve(double, unsigned int);

int main()
{
	double x;
	unsigned n;

	std::cout << "Enter n, x >> ";
	std::cin >> n >> x;

	std::cout << solve(x, n);

	return 0;
}

double solve(double x, unsigned int n)
{
	double p = 1;

	while (n)
	{
		p *= 2 * pow(x, n--);
	}

	return p;
}