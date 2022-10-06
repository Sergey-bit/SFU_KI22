#include <iostream>
#include <iomanip>

void print_diag(int s)
{
	for (size_t i = 1; i <= s; i++)
	{
		std::cout << std::setw(i);
		std::cout << "*" << std::endl;
	}
}

int main()
{
	int s = 0;

	std::cout << "Enter S >> ";
	std::cin >> s;

	print_diag(s);

	return 0;
}