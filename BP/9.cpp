#include <iostream>

float min_or_max(float a, float b, float c)
{
	return (a > 0.5) ? std::max(b, c) : std::min(b, c);
}

int main()
{
	float a, b, c;

	std::cout << "Enter a, b, c >> ";
	std::cin >> a >> b >> c;
	std::cout << "Answer: " << min_or_max(a, b, c) << std::endl;

	return 0;
}