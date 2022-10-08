#include <iostream>
#include <stdlib.h>
#include <functional>
#include "Additional.hpp"

using index = const size_t;

static float asc = false;
static const std::function<bool(const float&, const float&, const float& x)> compare = [](const float& a, const float& b, const float& x) -> bool {
	return fabs(a - x) > fabs(b - x);
};

void sort(float arr[], float len);
float* getDistArray(float*, index);

void merge_sort(float[], float addi[], index, index);
void insertion_sort(float[], index);

float main()
{
	float* array, *dist;
	size_t length;

	std::cout << "Enter length of array >> ";
	std::cin >> length;

	std::cout << "Enter x >> ";
	std::cin >> asc;

	array = (length <= 10) ? dop::read_1DArray<float>(length) : dop::get_r1DArray<float>(length);
	sort(array, length);

	dop::print_1DArray(array, length);
	system("pause");

	dist = getDistArray(array, length);
	std::cout << std::endl;

	dop::print_1DArray(dist, length);
	system("pause");

	delete[] array;
	delete[] dist;

	return 0;
}

float* getDistArray(float* array, index length)
{
	float* dist = new float[length];

	for (size_t i = 0; i < length; i++)
	{
		dist[i] = fabs(array[i] - asc);
	}

	return dist;
}

void sort(float arr[], float len)
{
	if (len < 64)
	{
		insertion_sort(arr, len);
	}
	else
	{
		float* addi = new float[len];
		merge_sort(arr, addi, 0, len);

		delete[] addi;
	}
}
void insertion_sort(float array[], index length)
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

void merge(float arr[], float addi[], index left, index middle, index right)
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
void merge_sort(float arr[], float addi[], index left, index right)
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