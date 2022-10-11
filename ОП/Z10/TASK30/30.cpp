#include <functional>
#include <iostream>
#include <stdlib.h>

size_t join(char* s_out, size_t len, const char* const* s_in, size_t n_in, const char* sep);

int main()
{
	char s[10000];
	char delimeter;
	const char* words[11] = { "Hello", "everybody", "!", "Good", "luck", "to", "you" };

	join(s, 10000, words, 7, " ");
	std::cout << "joined string (s_out): " << s << std::endl;

	system("pause");
	return 0;
}

size_t join(char* s_out, size_t len, const char* const* s_in, size_t n_in, const char* sep)
{
	size_t j = 0;

	for (size_t i = 0; i < n_in && j < len; i++)
	{
		for (size_t k = 0; s_in[i][k] != '\0'; k++, j++)
		{
			s_out[j] = s_in[i][k];
		}

		for (size_t n = 0; sep[n] != '\0'; n++, j++)
		{
			s_out[j] = sep[n];
		}
	}

	if (j < len - 1)
	{
		s_out[j++] = '\0';
	}
	else
	{
		s_out[j] = '\0';
	}

	return j;
}