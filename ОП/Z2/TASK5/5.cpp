//���� ������ ����������
//��22-07�
// ������� � �������� 2, ����� 4
//13.09.2022

#include <stdio.h>
#include <stdlib.h>

int main() {
	system("chcp 1251");
	system("cls");

	double a, b, c, d, minA,minB,maxA,maxB;
	printf("������� 1 ����� ���������� �: ");
	scanf_s("%lf", &a);
	printf("������� 2 ����� ���������� A: ");
	scanf_s("%lf", &b);
	printf("������� 1 ����� ���������� B: ");
	scanf_s("%lf", &c);
	printf("������� 2 ����� ���������� B: ");
	scanf_s("%lf", &d);

	if (a < b) {
		minA = a;
		maxA = b;
	}
	else {
		minA = b;
		maxA = a;
	}
	if (c < d) {
		minB = c;
		maxB = d;
	}
	else {
		minB = d;
		maxB = c;
	}
	if (minA == minB && maxA == maxB) {
		printf("A = B ");
		return 0;
	}
	if (minB <= minA && maxA <= maxB) { //--minB---minA---maxA---maxB
		printf("A ������ � B");
		return 0;
	}
	if (minA <= minB && maxB <= maxA) { //--minA---minB---maxB---maxA
		printf("B ������ � A");
		return 0;
	}
	
	if ((minA < minB && minB <= maxA && maxA < maxB) || (minB < minA && minA <= maxB && maxA > minB)) { // --minA---minB---maxA---maxB
		printf("������ �����������");
		return 0;
	}

	printf("��� ����������� ");
	system("pause");
	return 0;
}