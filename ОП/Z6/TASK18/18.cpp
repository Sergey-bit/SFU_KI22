#include <iostream>
#include <iomanip>
#include <cmath>


using namespace std;

double f(double);

int main() {
	setlocale(LC_ALL, "Russian");

	double a, b, s, v, scale, x, y;
	cout << "Переменные a, b и s равны(через пробел): ";
	cin >> a >> b >> s;
	cout << "Scale: ";
	cin >> scale;
	int u = 0;

	for (a; a <= b; a += s) {

		x = a + s * u; //1 формула
		y = f(x); //вызов функции, 2 формула
		v = scale * y; //3 формула
		cout << setw(scale * y + 2) << "$(" << x << ", " << y << ") " << endl;

	}

	return 0;
}

double f(double x) {

	static const double pi = acos(-1.0);
	double y = sin(pi*x)*sin(pi * x); //Значение функции при x = ...

	return y;
}