//���� ������ ����������
//��22-07�
// ������� � �������� 2, ����� 4
//13.09.2022

#include <stdio.h>
#include <stdlib.h>

int main() {
	system("chcp 1251");
	system("cls");

	double a, b, c, d,x;
	printf("������� a: ");
	scanf_s("%lf", &a);
	printf("������� b: ");
	scanf_s("%lf", &b);
	printf("������� c: ");
	scanf_s("%lf", &c);
	printf("������� d: ");
	scanf_s("%lf", &d);
	printf("������� x: ");
	scanf_s("%lf", &x);

	if ((x<=b && x>=a) || (x>=b && x<=a)) {
		printf("������ � ���������� ");
		return 0;
	}
	if ((x <= d && x >= c) || (x >= d && x <= c)) {
		printf("������ � ���������� ");
		return 0;
	}

	printf("�� ����������� ����������� ");
	system("pause");
	return 0;
}