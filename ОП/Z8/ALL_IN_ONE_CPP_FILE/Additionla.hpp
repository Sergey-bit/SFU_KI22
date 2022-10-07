#define LENGTH 5U

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
	int** arr = new int* [len];

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
		delete[] * (array + i);
	}

	delete[] array;
}