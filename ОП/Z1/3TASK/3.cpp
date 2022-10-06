//Елин Максим Алексеевич
//КИ22-07Б 1 подгруппа
//общая задача номер 3

#include <iostream>
#include <cmath>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	double x;
	int c;
	cout << "Введите x: ";
	cin >> x;
	x *= 10;
	c = abs((int)x%10);
	cout << c;
	return 0;
}