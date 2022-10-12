#include <iostream>
#include <string.h>
#include <stdlib.h>

void rstrip(char* s, const char* chars);

int main()
{
	char s[10000];
	std::string chars;

	std::cout << "Enter s >> ";
	std::cin.getline(s, 10000);

	std::cout << "\nEnter chars >> ";
	std::cin >> chars;

	rstrip(s, chars.c_str());
	std::cout << "\nRes: " << s << std::endl;

	system("pause");
	return 0;
}

void rstrip(char* s, const char* chars)
{
	if (sizeof(s) < 2)
	{
		return;
	}
	enum { YEAH, NAH };

	size_t li = 0;
	uint8_t mode = YEAH;

	while (s[++li] != '\0')
		;
	li--;

	while (mode != NAH)
	{
		for (size_t i = 0; chars[i] != '\0'; i++)
		{
			if (chars[i] == s[li])
			{
				s[li--] = '\0';
				mode = YEAH;

				break;
			}
			mode = NAH;
		}
	}
}