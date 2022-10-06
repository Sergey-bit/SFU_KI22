#include <iostream>

void out(const int& x, int& last)
{
	std::cout << "was entered: " << x << std::endl;
	last = x;
}
void in(int& x)
{
	std::cout << "Enter >> ";
	std::cin >> x;
}

int main()
{
	int x = 0, last = 0;

	in(x);
	out(x, last);

	while (true)
	{
		in(x);

		if (x < last)
		{
			break;
		}

		out(x, last);
	}

	return 0;
}