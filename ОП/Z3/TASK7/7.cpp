//���� ������ ����������
// ��22-07�
// Z3 ������, ������ ����� 7 (������)
// 20.09.2022

#include <stdio.h>
#include <stdlib.h>

int find_most_frequent(int a, int b, int c, int d) {
	int sumzif = a + b + c + d;
	if (sumzif == 2) // ���� 2 �������, �� � 2 ����
		return -1;
	if (sumzif < 2) // ���� ������ 2 ������, �� ����� �������� ������
		return 0;
	else //���� ������ 2, �� ������ ������
		return 1;
}

int main() {
	system("chcp 1251");
	system("cls");

	int a, b, c, d;
	printf("������� a: ");
	scanf_s("%d", &a);
	printf("������� b: ");
	scanf_s("%d", &b);
	printf("������� c: ");
	scanf_s("%d", &c);
	printf("������� d: ");
	scanf_s("%d", &d);
	printf("����: %d\n", find_most_frequent(a, b, c, d));

	return 0;
}