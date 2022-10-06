//���� ������ ����������
// ��22-07�
// �������� 4, ������� 4
// 20.09.2022

#include <stdio.h>
#include <stdlib.h>
#include <cmath>


double f1(double x) {
	double power_of_e = exp(2*x); //e � �������
	return (power_of_e - 2.19e6); //��������� ������ �������
}

double f2(double x) {
	double expression = 5 * x + 2; //��������� ��� ������
	if (expression < 0) { 
		double sqrt_of_exp = -(pow(-expression, 1.0 / 3)); //�������������� ������ ��� ������������� ����� � �������
		return sqrt_of_exp;
	}
	else {
		double sqrt_of_exp = pow(expression,1.0/3); // 1/3 ������� �����  = ������ 3 ������� �� �����, �� ���� ��������������
		return sqrt_of_exp;
	}
}

int main() {
	system("chcp 1251");
	system("cls");

	double x;
	printf("������� x: ");
	scanf_s("%lf", &x);
	double y = f1(x) + f2(x);

	printf("����� �����: %.16lf", y);
	return 0;
}