#include <iostream>
#include <stdlib.h>

int** initMatrix(const size_t tile);
void print2DArray(int** const array, const size_t length, const size_t sublen);
void free2D(int** array, const size_t len);

int main()
{
	int** array;
	size_t length;

	std::cout << "Gimme length of the array: ";
	std::cin >> length;

	array = initMatrix(length);
	std::cout << "\nMatrix:" << std::endl;

	print2DArray(array, length, length);
	system("pause");

	free2D(array, length);
	return 0;
}

int** initMatrix(const size_t tile)
{
	int** array = new int* [tile];
	for (size_t i = 0; i < tile; i++)
	{
		array[i] = new int[tile];
		for (size_t j = 0; j < tile; j++)
		{
			array[i][j] = (i + j >= tile - 1) ? j + 1 : 0;
		}
	}

	return array;
}
void print2DArray(int** const array, const size_t length, const size_t sublen)
{
	for (int** i = array; i < array + length; i++)
	{
		for (int* j = *i; j < *i + sublen; j++)
		{
			std::cout << *j << " ";
		}

		std::cout << std::endl;
	}
}
void free2D(int** array, const size_t len)
{
	for (size_t i = 0; i < len; i++)
	{
		delete[] array[i];
	}

	delete[] array;
}