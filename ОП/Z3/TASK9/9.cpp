//���� ������ ����������
// ��22-07�
// Z3 ������, ������ ����� 9 (������)
// 20.09.2022

#include <stdio.h>
#include <stdlib.h>

float min_or_max(float a, float b, float c) {
	float min,max;

	if (b > c) { //���������� ��� � ���� ��� �������� ������������� ����
		min = c;
		max = b;
	}

	else { //���� b ������ ��� ����� c
		min = b;
		max = c;
	}

	if (a - 0.5 > 0) {
		printf("a ������ 0.5! \n");
		return max;
	}
	else {
		printf("a ������ ��� ����� 0.5! \n");
		return min;
	}
}

int main() {
	system("chcp 1251");
	system("cls");

	float a,b,c;
	printf("������� a: ");
	scanf_s("%f", &a);
	printf("������� b: ");
	scanf_s("%f", &b);
	printf("������� c: ");
	scanf_s("%f", &c);

	printf("����: %.2f\n", min_or_max(a,b,c)); //����� �������

	return 0;
}