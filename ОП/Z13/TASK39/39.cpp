#include <fstream>
#include <iostream>

void wrap_text(std::istream& ist, std::ostream& ost, int max_line_len);

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

	wrap_text(in, out, 20);

	out.close();
	in.close();

	system("pause");
	return 0;
}

void wrap_text(std::istream& ist, std::ostream& ost, int max_line_len)
{
	char tmp = '\0';
	while (!ist.eof())
	{
		for (size_t i = 0; i < max_line_len && !ist.eof(); i++)
		{
			ost << (tmp = (char)ist.get());
			if (tmp == '\n')
			{
				break;
			}
		}

		if (tmp != '\n')
		{
			ost << std::endl;
		}
	}
}