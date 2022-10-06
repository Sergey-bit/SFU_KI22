#include <iostream>
#include<iomanip>

using namespace std;

double f(double);

int main() {
	setlocale(LC_ALL, "Russian");

	double a, b, s;
	cout << "���������� a,b � s �����(����� ������): ";
	cin >> a >> b >> s;
	cout << right << setw(10) << "x" << right << setw(15) << "f(x)" << endl;

	for (double x = a; x <= b; x = x + s) //x �� ���������� �� a �� b, � ����� s
		cout << setw(10) << fixed << x << setw(15) << scientific << f(x) << endl;

	return 0;
}

double f(double x) {

	double y = 2 * x * x - 3 * x + 1; //�������� ������� ��� x = ...

	return y;
}