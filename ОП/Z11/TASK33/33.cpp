#include <iostream>
#include <stdlib.h>
#include "Additional.hpp"

#define SIZE 5

void transpose(int** arr, size_t size);

int main()
{
	srand(time(NULL));

	int** array = dop::get_r2DArray<int>(SIZE, SIZE);
	dop::print_2DArray(array, SIZE, SIZE);

	transpose(array, SIZE);
	std::cout << "\nTransposed matrix:" << std::endl;

	dop::print_2DArray(array, SIZE, SIZE);
	system("pause");

	return 0;
}

void transpose(int** arr, size_t size)
{
	for (size_t i = 0; i < size; i++)
	{
		for (size_t j = i; j < size; j++)
		{
			std::swap(arr[i][j], arr[j][i]);
		}
	}
}