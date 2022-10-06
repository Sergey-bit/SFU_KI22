#include <iostream>
#include "Additionla.hpp"

// Tasks
void print_array(int** arr, const size_t len, const size_t sublen, size_t count)
{
	for (int** arr1 = arr; arr1 != arr + len; arr1++)
	{
		std::cout << "Line: " << arr1 - arr << std::endl;
		for (int i = 0; i < sublen; i++)
		{
			std::cout << *((*arr1) + i) << std::endl;
			count--;

			if(count == 0)
			{
				break;
			}
		}

		if (count == 0)
		{
			break;
		}
	}
}
int count_equal(int** arr, const int len, const int sublen, const int x)
{
	size_t count = 0;

	for (int** arr1 = arr; arr1 != arr + len; arr1++)
	{
		for (size_t i = 0; i < sublen; i++)
		{
			if (*((*arr1) + i) == x)
			{
				count += 1;
			}
		}
	}

	return count;
}
int splice_array(int** const arr1, int** const arr2, const size_t len, const size_t sublen, int** arr_out)
{
	for (size_t i = 0; i < len; i++)
	{
		for (size_t j = 0; j < sublen; j++)
		{
			*(*(arr_out + i) + 2 * j) = *(*(arr1 + i) + j);
			*(*(arr_out + i) + 2 * j + 1) = *(*(arr2 + i) + j);
		}
	}

	return len * sublen * 2;
}

// Additional
int* get_array(const size_t sublen)
{
	int* arr = new int[sublen];

	for (size_t i = 0; i < sublen; i++)
	{
		arr[i] = i;
	}

	return arr;
}
int** init_2array(const size_t len, const size_t sublen)
{
	int** arr = new int*[len];

	for (size_t i = 0; i < len; i++)
	{
		arr[i] = get_array(sublen);
	}

	return arr;
}

void free_2array(int** array, const size_t length)
{
	for (size_t i = 0; i < length; i++)
	{
		delete[] *(array + i);
	}

	delete[] array;
}

int main()
{
	int** array = init_2array(LENGTH, LENGTH);
	int** array1 = init_2array(LENGTH, LENGTH);

	int** array_out = init_2array(LENGTH, 2 * LENGTH);

	print_array(array, LENGTH, LENGTH, LENGTH * LENGTH);
	std::cout << "COUNT EQUAL 4: " << count_equal(array, LENGTH, LENGTH, 4) << std::endl;

	std::cout << "Array_out: " << std::endl;
	splice_array(array, array1, LENGTH, LENGTH, array_out);

	print_array(array_out, LENGTH, LENGTH * 2, LENGTH * LENGTH * 2);
	free_2array(array, LENGTH);

	free_2array(array1, LENGTH);
	free_2array(array_out, LENGTH);

	return 0;
}