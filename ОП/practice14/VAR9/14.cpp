#define _CRT_SECURE_NO_WARNINGS

#include <fstream>
#include <string>
#include <ctime>
#include <iostream>

std::string get(const tm& d, std::istream& ost);
std::tm* getSoughtDate(const size_t n);

int main()
{
	std::string filename;
	std::cout << "Enter filename: ";  std::getline(std::cin, filename);

	std::ifstream in(filename);
	if (!in.is_open())
	{
		std::cout << "Failed to open file \"dates_in.txt\"" << std::endl;
		return EXIT_FAILURE;
	}

	size_t n = 0;
	std::cout << "Enter n: "; std::cin >> n;
	
	const std::tm* date = getSoughtDate(n);
	std::cout << "\nRESULT: " << get(*date, in) << std::endl;

	in.close();
	delete date;

	system("pause");
	return EXIT_SUCCESS;
}

void DatePlusDays(struct tm* date, int days)
{
	const time_t ONE_DAY = 24 * 60 * 60;

	time_t date_seconds = mktime(date) + (days * ONE_DAY);

	*date = *localtime(&date_seconds);
}
std::tm* getSoughtDate(const size_t n)
{
	std::string date;
	std::cout << "Enter date in format <dd.mm.yy>: "; std::cin >> date;

	std::tm* d = new std::tm{ 0 };

	d->tm_mday = std::stoi(date.substr(0, 2));
	d->tm_mon = std::stoi(date.substr(3, 2)) - 1;
	d->tm_year = std::stoi(date.substr(6, 2)) + 100;

	DatePlusDays(d, n);
	return d;
}
std::string get(const tm& d, std::istream& ist)
{
	std::string tmp;
	while (std::getline(ist, tmp))
	{
		std::tm data = std::tm{ 0 };

		data.tm_mday = std::stoi(tmp.substr(0, 2));
		data.tm_mon = std::stoi(tmp.substr(3, 2)) - 1;
		data.tm_year = std::stoi(tmp.substr(6, 2)) + 100;

		if (data.tm_mday == d.tm_mday && data.tm_mon == d.tm_mon && data.tm_year == d.tm_year)
		{
			return "The record was found. " + tmp;
		}
	}

	return "This data wasn't found";
}