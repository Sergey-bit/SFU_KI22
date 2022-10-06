//Елин Максим Алексеевич
//КИ22-07Б 1 подгруппа
// Практика номер 5, задание 2
// Вариант 3

#include <iostream>
#include <cmath>
using namespace std;
bool automorphic_number(int N) {

	int sq_n = N * N; 

	for (;N>0; sq_n /= 10, N /= 10) {
		
		if (sq_n % 10 != N % 10)
			return false;
	
	}

	return true;
	
}

int main() {
	setlocale(LC_ALL, "Russian");

	int N;
	cout << "Введите натуральное число (от 1 до 1000): ";
	cin >> N;

	if (N <= 0 || N>=1000) {

		cout << "Не натуральное число или не подходит по условию! ";
		return 0;

	}

	if (automorphic_number(N)) {

		cout << "Да";
		return 0;

	}

	cout << "Нет";

	return 0;
}