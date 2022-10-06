#include <iostream>

double ai(int);
double solve(unsigned int);

int main()
{
	unsigned int n = 0;

	std::cout << "Enter n >> ";
	std::cin >> n;

	std::cout << solve(n);
	return 0;
}

double ai(int i)
{
	return i / (i + 1.0);
}
double solve(unsigned int n)
{
	double sum = 0;

	while (n)
	{
		sum += ai(n--);
	}

	return sum;
}