//Елин Максим Алексеевич
// КИ22-07Б
//Z5 задачи, задача номер 15

#include <iostream>

using namespace std;

int ai(int);

int main() {
	setlocale(LC_ALL, "Russian");

	int N;
	cout << "Введите N: ";
	cin >> N;

	cout.setf(ios::fixed);
	cout << ai(N);

	return 0;
}

int ai(int N) {
	int res = 0;
	int s = -1;

	for (int i = 1; i < N + 1; ++i) {
		res += i * s;
		s *= -1; // (-1) в степени i, что обходит проверку четности
	} //S = i*s(i)

	return res;
}