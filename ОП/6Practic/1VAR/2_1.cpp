// ���� ������ ����������
// ��22-07�
// �������� ����� 6
// ������� 1

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double ai(double,double);

int main() {
	setlocale(LC_ALL, "Russian");

	double delta,x,cosx;
	cout << "������� delta � x: ";
	cin >> delta >> x;
	cosx = cos(x);
	cout.setf(ios::fixed);
	double sum = ai(delta, x);
	cout << "����� ����: " << setprecision(16) << sum << endl;
	cout << "������� x: " << setprecision(16) << cosx << endl;
	cout << "�������: " << setprecision(16) << (sum - cosx);

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