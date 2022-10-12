#include <fstream>
#include "Additional.hpp"

void print2d(const int* const* arr, size_t nrows, size_t ncols, std::ostream& ost);

int main()
{
	size_t nrows = 0, ncols = 0;
	std::ofstream out("out.txt");

	if (!out.is_open())
	{
		std::cout << "Failed to open file: out.txt" << std::endl;
		return 1;
	}

	std::cout << "Enter nrows: "; std::cin >> nrows;
	std::cout << "Enter ncols: "; std::cin >> ncols;

	int** arr = (nrows * ncols > 16) ? dop::get_r2DArray<int>(nrows, ncols) : dop::read_2DArray<int>(nrows, ncols);

	print2d(arr, nrows, ncols, out);
	system("pause");

	out.close();

	dop::free_2DArray<int>(arr, nrows);
	return 0;
}

void print2d(const int* const* arr, size_t nrows, size_t ncols, std::ostream& ost)
{
	for (size_t i = 0; i < nrows; i++)
	{
		for (size_t j = 0; j < ncols; j++)
		{
			ost << arr[i][j] << " ";
		}

		ost << std::endl;
	}
}