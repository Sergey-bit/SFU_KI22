#include <iostream>

int find_most_frequent(int a, int b, int c, int d)
{
	const int summa = b + a + c + d;

	if (summa == 2)
	{
		return -1;
	}
	else if (summa < 2)
	{
		return 0;
	}

	return 1;
}

int main()
{
	int a, b, c, d;

	std::cout << "Enter a, b, c, d >> ";
	std::cin >> a >> b >> c >> d;
	std::cout << "Answer: " << find_most_frequent(a, b, c, d) << std::endl;

	return 0;
}