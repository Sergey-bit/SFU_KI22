// #include <functional> Вроде не нужно
#include <iostream>
// #include <stdlib.h> Вроде также не нужно

#define S_LENGTH 10000
#define WORDS_LENGTH 7
#define MAX_WORD_LENGTH 11

size_t join(char* s_out, size_t len, const char* const* s_in, size_t n_in, const char* sep);

int main()
{
	char s[S_LENGTH];
	char delimeter;
	const char* words[MAX_WORD_LENGTH] = { "Hello", "everybody", "!", "Good", "luck", "to", "you" };

	join(s, S_LENGTH, words, WORDS_LENGTH, " ");
	std::cout << "joined string (s_out): " << s << std::endl;

	system("pause");
	return 0;
}

size_t join(char* s_out, size_t len, const char* const* s_in, size_t n_in, const char* sep)
{
	size_t j = 0;

	for (size_t i = 0; i < n_in && j < len; i++)
	{
		for (size_t k = 0; s_in[i][k] != '\0' && j < len; k++, j++)
		{
			s_out[j] = s_in[i][k];
		}

		for (size_t n = 0; sep[n] != '\0' && j < len; n++, j++)
		{
			s_out[j] = sep[n];
		}
	}

	if (j < len - 1)
	{
		s_out[j] = '\0';
	}
	else
	{
		s_out[j--] = '\0';
	}

	return j;
}
