#include <iostream>
#include<iomanip>

using namespace std;

double f(double);

int main() {
	setlocale(LC_ALL, "Russian");

	double a, b, s;
	cout << "���������� a,b � s �����(����� ������): ";
	cin >> a >> b >> s;

	for (double x1 = a; x1 <= b; x1 += s)
		cout << setprecision(3) << setw(15) << fixed << x1;

	cout << endl;

	for (double x = a; x <= b; x += s)
		cout << setprecision(5) << setw(15) << scientific << f(x);

	return 0;
}

double f(double x) {

	double y = 5*x + 2; //�������� ������� ��� x = ...

	return y;
}