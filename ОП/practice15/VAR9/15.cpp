#include <fstream>
#include <iostream>
#include <string>

std::string getFilename()
{
	std::string filename;

	std::cout << "Enter filename: ";
	std::getline(std::cin, filename);

	return filename;
}

size_t findNegative(int* arr, size_t len, size_t offset=0);
int product(int* arr, size_t offset, size_t length);
int** readMatrix(std::istream& in, size_t& N, size_t& M);
void text2bin(std::istream& ist, std::ostream& ost);
void free2D(int** arr, size_t len);

int main()
{
	std::string filename = getFilename();
	std::string outFilename = filename.substr(0, filename.find_last_of('.')) + "(out).bin";

	std::ifstream in(filename);
	std::ofstream out(outFilename, std::ios_base::binary | std::ios_base::out);

	if (!in.is_open())
	{
		std::cout << "Failed to open file \"" << filename << "\"" << std::endl;
		return EXIT_FAILURE;
	}
	if (!out.is_open())
	{
		std::cout << "Failed to open/create file \"" << outFilename << "\"" << std::endl;
		return EXIT_FAILURE;
	}

	text2bin(in, out);

	in.close();
	out.close();

	system("pause");
	return EXIT_SUCCESS;
}

void free2D(int** arr, size_t len)
{
	for (size_t i = 0; i < len; i++)
	{
		delete[] * (arr + i);
	}
	delete[] arr;
}
size_t findNegative(int* arr, size_t len, size_t offset)
{
	for (size_t i = 0; i < len; i++)
	{
		if (arr[offset + i] < 0)
		{
			return offset + i;
		}
	}

	return offset + len + 1;
}
int product(int* arr, size_t offset, size_t length)
{
	int p = 1;

	for (size_t i = 0; i < length; i++)
	{
		p *= arr[offset + i];
	}

	return p;
}
int** readMatrix(std::istream& in, size_t& N, size_t& M)
{
	in >> N >> M;
	int** arr = new int* [N];

	for (size_t i = 0; i < N; i++)
	{
		arr[i] = new int[M];
		for (size_t j = 0; j < M; j++)
		{
			in >> arr[i][j];
		}
	}

	return arr;
}
void text2bin(std::istream& ist, std::ostream& ost)
{
	size_t N, M;
	int** arr = readMatrix(ist, N, M);

	for (int** a = arr; a < arr + N; a++)
	{
		size_t firstInd = findNegative(*a, M, 0);
		if (firstInd == M + 1)
		{
			std::cout << "There are not any negative numbers. Line: " << a - arr + 1 << std::endl;
			continue;
		}

		size_t secondInd = findNegative(*a, M - firstInd, firstInd + 1);
		if (secondInd == M + 1)
		{
			std::cout << "There is only one negative number. Line: " << a - arr + 1 << std::endl;
			continue;
		}

		ost << product(*a, firstInd + 1, secondInd - firstInd - 1) << "\n";
	}

	free2D(arr, N);
}