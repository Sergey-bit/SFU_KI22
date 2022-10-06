//Елин Максим Алексеевич
// КИ22-07Б
//Z5 задачи, задача номер 13

#include <iostream>

using namespace std;

double ai(int);

int main() {
	setlocale(LC_ALL, "Russian");

	int N;
	double res;
	cout << "Введите N: ";
	cin >> N;

	cout.precision(2);
	cout.setf(ios::fixed);
	res = 0.0;

	for (int i = 1; i < N + 1; ++i)
		res += ai(i);
	cout << res;

	return 0;
}

double ai(int i) {
	return double(i) / (double(i) + 1); // S = i/(i+1)
}