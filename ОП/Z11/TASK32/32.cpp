#include <iostream>
#include <stdlib.h>
#include "Additional.hpp"

#define NROWS 5
#define NCOLS 1

void fliplr(int** arr, size_t nrows, size_t ncols);

int main()
{
	int** array = dop::get_r2DArray<int>(NROWS, NCOLS);
	dop::print_2DArray(array, NROWS, NCOLS);
	
	std::cout << "\nReversed array:\n";

	fliplr(array, NROWS, NCOLS);
	dop::print_2DArray(array, NROWS, NCOLS);

	system("pause");
	return 0;
}

void fliplr(int** arr, size_t nrows, size_t ncols)
{
	for (size_t k = 0; k < nrows; k++)
	{
		for (size_t i = 0, j = ncols - 1; i < j; i++, j--)
		{
			std::swap(arr[k][i], arr[k][j]);
		}
	}
}