#include <fstream>
#include "Additional.hpp"

void print_transposed(const int* const* arr, size_t size, std::ostream& ost);

int main()
{
	size_t size = 0;
	std::ofstream out("out.txt");

	if (!out.is_open())
	{
		std::cout << "Failed to open file: out.txt" << std::endl;
		return 1;
	}

	std::cout << "Enter size: "; std::cin >> size;

	int** arr = (size * size > 16) ? dop::get_r2DArray<int>(size, size) : dop::read_2DArray<int>(size, size);

	print_transposed(arr, size, out);
	system("pause");

	out.close();

	dop::free_2DArray<int>(arr, size);
	return 0;
}

void print_transposed(const int* const* arr, size_t size, std::ostream& ost)
{
	for (size_t j = 0; j < size; j++)
	{
		for (size_t i = 0; i < size; i++)
		{
			ost << arr[i][j] << " ";
		}

		ost << std::endl;
	}
}