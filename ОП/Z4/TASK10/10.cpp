//���� ������ ����������
//��22-07� 1 ���������
// Z4 �������, 1 �������
// 27.09.2022

#include <stdio.h>
#include <stdlib.h>

int main() {
	system("chcp 1251");
	system("cls");

	int xaft, xbef;
	xaft = 0;
	xbef = 0;

	printf("������� x: ");
	scanf_s("%d", &xaft);
	xbef = xaft;

	while (xaft>=xbef) {
		printf("%d\n", xaft);
		xbef = xaft;
		printf("������� x: ");
		scanf_s("%d", &xaft);

		/*if (xaft < xbef)
			break;*/

		
		
	}

	return 0;
}