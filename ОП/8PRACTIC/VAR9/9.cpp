#include <iostream>

int* read_array(const int length)
{
	int* arr = new int[length];

	for (int i = 0; i < length; i++)
	{
		std::cout << "Enter arr[" << i << "] = ";
		std::cin >> arr[i];
	}

	return arr;
}
void print_array(const int arr[], const int len)
{
	for (size_t i = 0; i < len; i++)
	{
		std::cout << "arr[" << i << "] = " << arr[i] << std::endl;
	}
}

size_t get_index(const int arr[], const size_t len)
{
	for (size_t i = 0; i < len; i++)
	{
		if (arr[i] < 0)
		{
			return i;
		}
	}

	return -1;
}
int my_task(const int A[], const int lenA, int B[], const int lenB)
{
	size_t fnegative = get_index(A, lenA);
	int count = 0;

	for (size_t i = 0; i < lenB; i++)
	{
		if (i < fnegative && i < lenA && !A[i])
		{
			B[i] = 1;
		}
		else if (i < lenA)
		{
			B[i] = A[i];
		}
		else
		{
			count--;
		}
		
		count++;
	}

	return count;
}

int main()
{
	int length, length2;
	int* array, *barray;

	std::cout << "Enter length of A arrray >> ";
	std::cin >> length;

	array = read_array(length);
	print_array(array, length);

	std::cout << "Enter length of B array >> ";
	std::cin >> length2;

	barray = new int[length2];
	my_task(array, length, barray, length2);

	print_array(barray, length2);

	delete[] barray;
	delete[] array;

	return 0;
}