#include <iostream>
#include <iomanip>

void print_rect(int, int, int, int);

int main()
{
	int x, y, sx, sy;

	std::cout << "Enter x, y, sx, sy >> ";
	std::cin >> x >> y >> sx >> sy;

	print_rect(x, y, sx, sy);

	return 0;
}

void out_line(int sx, int x)
{
	std::cout << std::setw(x + 1);
	while (sx--)
	{
		std::cout << "@";
	}
	std::cout << std::endl;
}
void print_rect(int x, int y, int sx, int sy)
{
	while (y--)
	{
		std::cout << std::endl;
	}

	while (sy--)
	{
		out_line(sx, x);
	}
}