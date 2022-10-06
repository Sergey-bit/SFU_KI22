#include <iostream>
#include <cmath>

#define PI 3.1415926535

// Вариант 9

int get_sign(unsigned int i)
{
	return (i % 2 == 0) ? 1 : -1;
}

int main()
{
	double delta, x;

	std::cout << "Enter delta, x >> ";
	std::cin >> delta >> x;

	double S = PI / 2 - atan(x), Sn = 0;

	for (unsigned int i = 0; abs(S - Sn) >= delta; i++)
	{
		Sn += get_sign(i) / ((2 * i + 1) * pow(x, 2 * i + 1));
	}

	std::cout << Sn << " " << S << " " << S - Sn << std::endl;

	return 0;
}