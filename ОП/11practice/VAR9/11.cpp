#include <iostream>
#include <stdlib.h>

#define LENGTH 10000

struct Data
{
private:
	struct Node
	{
		Node* prev;
		char val;
	};

public:
	Node* nodes;

	void push_back(char s)
	{
		if (nodes == nullptr)
		{
			nodes = new Node{ nullptr, s };
		}
		else
		{
			nodes = new Node{ nodes, s };
		}
	}
	char pop()
	{
		if (nodes == nullptr)
		{
			return '\0';
		}
		if (nodes->prev == nullptr)
		{
			char s = nodes->val;

			delete nodes;
			nodes = nullptr;

			return s;
		}

		Node* tmp = nodes;
		while (tmp->prev->prev)
		{
			tmp = tmp->prev;
		}

		char s = tmp->prev->val;
		delete tmp->prev;

		tmp->prev = nullptr;
		return s;
	}
};

void transform(char* const s);

int main()
{
	char s[LENGTH];

	std::cout << "Enter string: ";
	std::cin.getline(s, LENGTH);

	transform(s);

	std::cout << "Output: " << s << std::endl;
	system("pause");

	return 0;
}

void transform(char* const s)
{
	if (s[0] == '\0')
	{
		return;
	}

	Data data{};
	size_t i = 1;

	for (; s[i] != '\0'; i++)
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
		{
			data.push_back(' ');
		}
		data.push_back(s[i]);
		s[i] = data.pop();
	}

	while ((s[i++] = data.pop()) != '\0');
}