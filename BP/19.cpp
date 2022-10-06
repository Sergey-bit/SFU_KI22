#include <iostream>

#define LENGTH 10

//19
void print_array(int arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		std::cout << "arr[" << i << "] = " << arr[i] << std::endl;
	}
}



int main()
{
	int arr[LENGTH] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	print_array(arr, LENGTH);

	return 0;
}
