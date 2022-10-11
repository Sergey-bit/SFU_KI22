#include <functional>
#include <iostream>
#include <cstring>
#include <stdlib.h>

void strip(char* s, const char* chars);

int main()
{
	char s[10000];
	std::string chars;

	std::cout << "Enter s >> ";
	std::cin.getline(s, 10000);

	std::cout << "\nEnter chars >> ";
	std::cin >> chars;

	strip(s, chars.c_str());
	std::cout << "\nRes: " << s << std::endl;

	system("pause");
	return 0;
}

size_t handler(char* s, const char* chars, size_t li, const short int diff)
{
	enum { YEAH, NAH };
	uint8_t mode = YEAH;

	while (mode != NAH)
	{
		for (size_t i = 0; chars[i] != '\0'; i++)
		{
			if (chars[i] == s[li])
			{
				s[li] = 7;
				mode = YEAH;

				li += diff;
				break;
			}
			mode = NAH;
		}
	}
	return li;
}
void strip(char* s, const char* chars)
{
	if (sizeof(s) < 2)
	{
		return;
	}

	size_t li = handler(s, chars, 0, 1);

	while (s[++li] != '\0')
		;
	li--;

	handler(s, chars, li, -1);
}