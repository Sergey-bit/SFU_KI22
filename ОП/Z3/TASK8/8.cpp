//���� ������ ����������
// ��22-07�
// Z3 ������, ������ ����� 8 (������)
// 20.09.2022

#include <stdio.h>
#include <stdlib.h>
#include <cmath>

float dist(float x1, float y1, float x2, float y2) {
	float yandy = y2 - y1; //(������� y ���������)^2
	float xandx = x2 - x1; //(������� x ���������) ^ 2
	float range = sqrt(yandy*yandy + xandx*xandx); // ������ �� ����� ��������� � ��������, ���������� ������� ����������
	return range;
}

int main() {
	system("chcp 1251");
	system("cls");

	float x1, y1, x2, y2;
	printf("������� x, 1 �����: ");
	scanf_s("%f", &x1);
	printf("������� y, 1 �����: ");
	scanf_s("%f", &y1);
	printf("������� x, 2 �����: ");
	scanf_s("%f", &x2);
	printf("������� y, 2 �����: ");
	scanf_s("%f", &y2);
	printf("���������� �����: %.2f\n", dist(x1, y1, x2, y2));

	return 0;
}