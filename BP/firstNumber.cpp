#include <iostream>
#include <cmath>

int main(int argc, char* args[])
{
	float a = 0;

	std::cin >> a;
	std::cout << (unsigned int)(abs(a) * 10) % 10 << std::endl;

	return 0;
}