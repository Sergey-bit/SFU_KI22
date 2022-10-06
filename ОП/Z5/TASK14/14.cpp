//Елин Максим Алексеевич
// КИ22-07Б
//Z5 задачи, задача номер 14

#include <iostream>

using namespace std;

double ai(int,double);

int main() {
	setlocale(LC_ALL, "Russian");

	int N;
	double x;
	cout << "Введите N и x (через пробел): ";
	cin >> N >> x;

	cout.setf(ios::fixed);
	cout.precision(1);
	cout << ai(N,x);

	return 0;
}

double ai(int N,double _x) {

	double res = 1.0, x =2.0 * _x;

	for (int i = 1; i < N + 1; ++i) {
		res *= x;
		x *= _x;
	} // S = Произведение ряда S = П 2*x^2
	
	return res;
}