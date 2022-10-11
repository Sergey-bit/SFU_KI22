#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <ctime>
#include <functional>
#include "Additional.hpp"

typedef struct Point
{
	int* ai;
	int* bi;
} Point;
bool asc = false;

namespace sorter
{
	static const std::function<bool(const Point, const Point, const bool)> compare = [](const Point a, const Point b, const bool asc) -> bool {
		double beam1 = sqrt(pow(*a.ai, 2) + pow(*a.bi, 2));
		double beam2 = sqrt(pow(*b.ai, 2) + pow(*b.bi, 2));

		if (!beam1 || !beam2)
		{
			return (beam1 > beam2) != asc;
		}
		return (acos(*a.ai / beam1) > acos(*b.ai / beam2)) != asc;
	};

	template<typename T>
	void merge(T* const arr, T* const addi, const size_t left, const size_t middle, const size_t right)
	{
		size_t k = 0;

		for (size_t i = middle, j = left; k < right - left; k++)
		{
			if (i < right && (j == middle || compare(arr[i], arr[j], asc)))
			{
				addi[k] = arr[i++];
			}
			else
			{
				addi[k] = arr[j++];
			}
		}

		while (k--)
		{
			arr[left + k] = addi[k];
		}
	}

	template<typename T>
	void merge_sort(T* const arr, T* const addi, const size_t left, const size_t right)
	{
		if (right - left == 1)
		{
			return;
		}

		size_t middle = left + (right - left) / 2;

		merge_sort<Point>(arr, addi, left, middle);
		merge_sort<Point>(arr, addi, middle, right);

		merge<Point>(arr, addi, left, middle, right);
	}
}
void printArrayOfPoints(const Point*, const size_t);

void sort(Point*, const size_t);
Point* mergeToPointArray(int* const A, int* const B, const size_t len);

int main()
{
	Point* C;
	int* A, *B;

	size_t len;

	std::cout << "Enter length of array >> ";
	std::cin >> len;

	if (len >= 15)
	{
		srand(time(NULL));

		A = dop::get_r1DArray<int>(len);
		B = dop::get_r1DArray<int>(len);
	}
	else
	{
		std::cout << "Array A:" << std::endl;
		A = dop::read_1DArray<int>(len);

		std::cout << "Array B:" << std::endl;
		B = dop::read_1DArray<int>(len);
	}

	C = mergeToPointArray(A, B, len);

	std::cout << "\nArray C: " << std::endl;
	printArrayOfPoints(C, len);

	std::cout << "\nEnter asc (0, 1) >> ";
	std::cin >> asc;

	sort(C, len);
	std::cout << "\nSorted array C: " << std::endl;

	printArrayOfPoints(C, len);

	if (asc)
	{
		std::cout << "\nMinimal angle between beam and point: (" << *C[0].ai << ", " << *C[0].bi << ")" << std::endl;
	}
	else
	{
		std::cout << "\nMinimal angle between beam and point: (" << *C[len - 1].ai << ", " << *C[len - 1].bi << ")" << std::endl;
	}

	system("pause");

	delete[] A;
	delete[] B;
	delete[] C;

	return 0;
}

void printArrayOfPoints(const Point* arr, const size_t len)
{
	for (size_t i = 0; i < len; i++)
	{
		std::cout << "C[" << i << "] = (" << *arr[i].ai << ", " << *arr[i].bi << ")" << std::endl;
	}
}

Point* mergeToPointArray(int* const A, int* const B, const size_t len)
{
	Point* C = new Point[len];

	for (size_t i = 0; i < len; i++)
	{
		C[i] = { A + i, B + i };
	}

	return C;
}
void sort(Point* const C, const size_t len)
{
	Point* addi = new Point[len];

	sorter::merge_sort<Point>(C, addi, 0, len);
	delete[] addi;
}


