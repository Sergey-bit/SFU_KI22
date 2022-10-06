#include <iostream>

int main(int argc, char* args[])
{
	unsigned int num_people = 0, num_seats = 0;

	std::cout << "Enter num_people, num_seats: ";
	std::cin >> num_people >> num_seats;

	std::cout << "Num_busses: " << num_people / num_seats + (num_people % num_seats != 0) << std::endl;
	std::cout << "Num_free_seats: " << num_seats - num_people % num_seats << std::endl;

	return 0;
}