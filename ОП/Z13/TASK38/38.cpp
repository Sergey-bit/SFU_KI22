#include <fstream>
#include <iostream>
#include <string>

struct Stack
{
private:
	struct Node
	{
		Node* prev;
		std::string val;
	};
	Node* higher;

public:
	void push(std::string s)
	{
		if (higher == nullptr)
		{
			higher = new Node{ nullptr, s };
		}
		else
		{
			higher = new Node{ higher, s };
		}
	}
	std::string pop()
	{
		if (higher == nullptr)
		{
			std::string ret = "\0";
			return ret;
		}
		std::string ret = higher->val;

		Node* tmp = higher;
		higher = tmp->prev;

		delete tmp;
		return ret;
	}
};

void rev_lines(std::istream& ist, std::ostream& ost);

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

	rev_lines(in, out);

	out.close();
	in.close();

	system("pause");
	return 0;
}

void rev_lines(std::istream& ist, std::ostream& ost)
{
	std::string store = "";
	Stack stack{};

	while (std::getline(ist, store, '\n'))
	{
		stack.push(store + '\n');
	}
	while ((store = stack.pop()) != "\0")
	{
		ost << store;
	}
}