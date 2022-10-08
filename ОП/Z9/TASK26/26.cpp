#include <iostream>
#include <stdlib.h>
#include <functional>
#include "Additional.hpp"

using index = const size_t;

static bool asc = false;
static const std::function<bool(const int&, const int&, const bool&)> compare = [](int a, int b, bool asc) -> bool {
	return ((a % 2 == b % 2) || !asc) ? (a > b) : (a % 2 == 0);
};

void sort(int arr[], int len);

void merge_sort(int[], int addi[], index, index);
void insertion_sort(int[], index);

int main()
{
	int* array;
	size_t length;

	std::cout << "Enter length of array >> ";
	std::cin >> length;

	std::cout << "Enter even_greater (0 or 1) >> ";
	std::cin >> asc;

	array = (length <= 10) ? dop::read_1DArray<int>(length) : dop::get_r1DArray<int>(length);
	sort(array, length);

	dop::print_1DArray(array, length);
	if (asc == 0)
	{
		std::cout << "Was sorted? " << (dop::isSorted(array, length) ? "Yeah" : "Nah") << std::endl;
	}

	delete[] array;
	system("pause");

	return 0;
}

void sort(int arr[], int len)
{
	if (len < 64)
	{
		insertion_sort(arr, len);
	}
	else
	{
		int* addi = new int[len];
		merge_sort(arr, addi, 0, len);

		delete[] addi;
	}
}
void insertion_sort(int array[], index length)
{
	ptrdiff_t j = 0;

	for (size_t current = 0, i = 0; i < length; i++)
	{
		current = i;
		j = i - 1;

		while (j != -1 && !compare(array[current], array[j], asc))
		{
			std::swap(array[current--], array[j--]);
		}
	}

}

void merge(int arr[], int addi[], index left, index middle, index right)
{
	size_t i = left, j = middle, k = 0;

	for (; k < right - left; k++)
	{
		if ((compare(arr[i], arr[j], asc) || i >= middle) && j < right)
		{
			addi[k] = arr[j++];
		}
		else
		{
			addi[k] = arr[i++];
		}
	}

	while (k--)
	{
		arr[left + k] = addi[k];
	}
}
void merge_sort(int arr[], int addi[], index left, index right)
{
	if (right - left == 1)
	{
		return;
	}

	size_t middle = left + (right - left) / 2;

	merge_sort(arr, addi, left, middle);
	merge_sort(arr, addi, middle, right);

	merge(arr, addi, left, middle, right);
}