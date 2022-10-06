#include <iostream>

// Вариант 3

bool is_automorphic(unsigned int n)
{
	size_t depth = 1;

	while (n >= depth)
	{
		depth *= 10;
	}

	return (n * n) % depth == n;
}

int main()
{
	unsigned int n;

	std::cout << "Enter n >> ";
	std::cin >> n;

	std::cout << is_automorphic(n);

	return 0;
}