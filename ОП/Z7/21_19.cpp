#define LENGTH 10
#define DLENGTH 20

//19
void print_array(int arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		std::cout << "arr[" << i << "] = " << arr[i] << std::endl;
	}
}


//21
int my_splice_array(int arr1[], int arr2[], int len, int arr_out[])
{
	for (size_t i = 0; i < len; i++)
	{
		arr_out[2 * i] = arr1[i];
		arr_out[2 * i + 1] = arr2[i];
	}

	return 2 * len;
}

int main()
{
	int arr[LENGTH] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int arr1[LENGTH] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	int arr2[DLENGTH];
	int length = my_splice_array(arr, arr1, LENGTH, arr2);

	print_array(arr2);

	return 0;
}