#include <iostream>
#include <stdlib.h>
#include "Additional.hpp"

int** make2d(size_t nrows, size_t ncols, int val);

int main()
{
	size_t nrows, ncols;
	int val;

	std::cout << "Nrows: ";
	std::cin >> nrows;

	std::cout << "Ncols: ";
	std::cin >> ncols;

	std::cout << "Val: ";
	std::cin >> val;

	std::cout << std::endl;

	int** array = make2d(nrows, ncols, val);
	dop::print_2DArray<int>(array, nrows, ncols);

	system("pause");
	return 0;
}

int* make1d(const size_t len, int val)
{
	int* n = new int[len];

	for (size_t k = 0; k < len; k++)
	{
		n[k] = val;
	}

	return n;
}
int** make2d(size_t nrows, size_t ncols, int val)
{
	int** n = new int* [nrows];

	while (nrows--)
	{
		n[nrows] = make1d(ncols, val);
	}

	return n;
}