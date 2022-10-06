#include <iostream>
#include <cmath>

float dist(float x1, float y1, float x2, float y2)
{
	return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}

int main()
{
	float x1, y1, x2, y2;

	std::cout << "Enter x1, y1, x2, y2 >> ";
	std::cin >> x1 >> y1 >> x2 >> y2;

	std::cout << "Dist: " << dist(x1, y1, x2, y2) << std::endl;

	return 0;
}