#include <iostream>

int main()
{
	double x, a, b, c, d;

	std::cout << "Enter x, a, b, c, d >> ";
	std::cin >> x >> a >> b >> c >> d;

	if ((x >= a && x <= b) || (x >= c && x <= d))
	{
		std::cout << "there is X in [a, b], [c, d]" << std::endl;
	}
	else
	{
		std::cout << "there is not X in [a, b], [c, d]" << std::endl;
	}

	return 0;
}