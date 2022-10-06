#include <iostream>

int main(int argc, char* args[])
{
	float dollarCourse = 0, euroCourse = 0, amount = 0;

	std::cout << "Enter dollar course, euro course: ";
	std::cin >> dollarCourse >> euroCourse;

	std::cout << "Enter amount of rubles: ";
	std::cin >> amount;

	std::cout << "Dollars: " << amount / dollarCourse << std::endl;
	std::cout << "Euro: " << amount / euroCourse << std::endl;

	return 0;
}