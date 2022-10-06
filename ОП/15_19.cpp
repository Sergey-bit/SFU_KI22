#include <iostream>
#include <cmath>

int solve(unsigned int);

int main()
{
	unsigned int n;

	std::cout << "Enter  n >> ";
	std::cin >> n;

	std::cout << solve(n);

	return 0;
}

bool is_evennumber(int i)
{
	return abs(i) % 2 == 0;
}
int s(int i)
{
	return is_evennumber(i) ? 1 : -1;
}
int solve(unsigned int n)
{
	int summa = 0;

	while (n)
	{
		summa += s(n) * n; n--;
	}

	return summa;
}