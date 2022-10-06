// Елин Максим Алексеевич
// КИ22-07Б
// Практика номер 6
// Вариант 1

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double ai(double,double);

int main() {
	setlocale(LC_ALL, "Russian");

	double delta,x,cosx;
	cout << "Введите delta и x: ";
	cin >> delta >> x;
	cosx = cos(x);
	cout.setf(ios::fixed);
	double sum = ai(delta, x);
	cout << "Сумма ряда: " << setprecision(16) << sum << endl;
	cout << "Косинус x: " << setprecision(16) << cosx << endl;
	cout << "Разница: " << setprecision(16) << (sum - cosx);

	return 0;
}

double ai(double delta,double x) {
	int s = 1, fact = 1, i = 1;
	double res = 0.0, elem = 0, x2 = x*x;
	x = 1.0;
	do  {
		res += elem;
		elem = s * x / fact;
		s *= -1;
		x *= x2;
		fact *= (2 * i) * (2 * i - 1);
		i++;
	} while (delta <= abs(elem));

	return res;
}