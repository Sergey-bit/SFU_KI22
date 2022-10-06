//Елин Максим Алексеевич
//КИ22-07Б 1 подгруппа
// Z4 задания, 2 задание
// 27.09.2022

#include <iostream>
using namespace std;

void print_diag(int s) {
	for (int i = 1; i < s+1; i++) {
		cout.width(i);
		cout << "*" << endl;
	}
}

int main() {
	setlocale(LC_ALL, "Russian");

	int s;
	cout << "Введите s: ";
	cin >> s;

	if (s <= 0) {
		cout << "Внимание! Не соблюдается условие: S>0!!";
		return 0;
	}

	print_diag(s);

	return 0;
}