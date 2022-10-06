//Елин Максим Алексеевич
//КИ22-07Б 1 подгруппа
//общее задание номер 1 

#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int x, y;
	cout << "Введите первое число: ";
	cin >> x;// Получает на вход первое число
	cout << "Введите второе число: ";
	cin >> y;// Получает на вход первое число
	x = x + y;
	y = x - y;
	x = x - y;
	cout << x <<", " << y; //Вывод ответа
	return 0;
}