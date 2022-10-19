#include <iostream>
#include <fstream>
#include <stdlib.h>

int** initMatrix(const size_t tile);
void free2D(int** array, const size_t len);
void out(int** const array, const size_t length, const size_t sublen, std::ostream& ost);

int main()
{
	std::ofstream file("out.txt");
	if (!file.is_open())
	{
		std::cout << "Failed to open \"out.txt\" file" << std::endl;
		return 1;
	}

	size_t length;
	int** array;

	std::cout << "Gimme length of the array: ";
	std::cin >> length;

	array = initMatrix(length);
	out(array, length, length, file);

	system("pause");
	free2D(array, length);

	file.close();
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
void out(int** const array, const size_t length, const size_t sublen, std::ostream& ost)
{
	for (int** i = array; i < array + length; i++)
	{
		for (int* j = *i; j < *i + sublen; j++)
		{
			ost << *j << " ";
		}

		ost << std::endl;
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