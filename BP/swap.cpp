#include <iostream>

void swap(int& a, int& b)
{
	a += b;
	b = a - b;
	a -= b;
}

void output(const int& a, const int& b)
{
	printf("a=%d ; b=%d\n", a, b);
}

int main(void)
{
	int a = 5, b = 7;

	output(a, b);
	swap(a, b);
	output(a, b);

	return 0;
}