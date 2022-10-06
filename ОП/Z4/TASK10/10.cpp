//Елин Максим Алексеевич
//КИ22-07Б 1 подгруппа
// Z4 задания, 1 задание
// 27.09.2022

#include <stdio.h>
#include <stdlib.h>

int main() {
	system("chcp 1251");
	system("cls");

	int xaft, xbef;
	xaft = 0;
	xbef = 0;

	printf("Введите x: ");
	scanf_s("%d", &xaft);
	xbef = xaft;

	while (xaft>=xbef) {
		printf("%d\n", xaft);
		xbef = xaft;
		printf("Введите x: ");
		scanf_s("%d", &xaft);

		/*if (xaft < xbef)
			break;*/

		
		
	}

	return 0;
}