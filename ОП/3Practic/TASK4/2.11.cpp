//���� ������ ����������
//��22-07�
//�������� ����� 3
//11 �������

#include <stdio.h>
#include <stdlib.h>


int main() {
	system("chcp 1251");
	system("cls");
	double N, M;
	printf("������� N: ");
	scanf_s("%lf", &N);
	printf("������� M: ");
	scanf_s("%lf", &M);

	//if (N < 1 || N > 1e9 || M < 1 || M > 1e9) { // 1 <= N <= 10^9 and 1 <= M <= 10^9, ���������� ���
	//	printf("0");
	//	return 0;
	//}

	if ((N == 1 && M == 1) || (N < 1 || N > 1e9 || M < 1 || M > 1e9)) {//���� ����� ����� �� (1;1) � ���� - ��� �����������
		printf("0");
		return 0;
	}

	if (N == 1 || M == 1) { // ������� ������, ���� ���� �� ��������� ����� 1
		printf("1");
		return 0;
	}

	printf("2");// � ��������� ������� - ������� ������
	return 0; 
}