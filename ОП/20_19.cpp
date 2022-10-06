int count_equal(int arr[], int len, int x)
{
	size_t count = 0;

	while (len--)
	{
		if (arr[len] == x)
		{
			count++;
		}
	}

	return count;
}


int main()
{
	int arr[LENGTH] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	int count = my_splice_array(arr, arr1, LENGTH, arr2);
	std::cout << count;

	return 0;
}