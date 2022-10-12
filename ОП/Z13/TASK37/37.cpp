#include <fstream>
#include <iostream>

void join(const char* sep, std::istream& ist, std::ostream& ost);

int main()
{
	std::ofstream out("out.txt");
	std::ifstream in("in.txt");

	if (!out.is_open())
	{
		std::cout << "Failed to open file \"out.txt\"" << std::endl;
		return 1;
	}
	if (!in.is_open())
	{
		std::cout << "Failed to open file \"in.txt\"" << std::endl;
		return 1;
	}

	const char* sep = " nah ";
	join(sep, in, out);

	out.close();
	in.close();

	system("pause");
	return 0;
}

void join(const char* sep, std::istream& ist, std::ostream& ost)
{
	std::string tmp, s = sep;

	bool was = false;

	while (!ist.eof())
	{
		ist >> tmp;
		ost << (was ? s : "") << tmp;

		was = true;
	}
}