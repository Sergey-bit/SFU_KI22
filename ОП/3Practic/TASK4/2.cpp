//Елин Максим Алексеевич
//КИ22-07Б
//практика номер 3
//Вариант 4

#include <stdio.h>
#include <stdlib.h>

int main() {
	system("chcp 1251");
	system("cls");

	double x1, y1, exam;
	printf("Введите x: ");
	scanf_s("%lf", &x1);
	printf("Введите y: ");
	scanf_s("%lf", &y1);
	exam = 4 * x1 - 3 - y1;
	if (exam == 0) {
		printf("YES");
		return 0;
	}

	if (exam < 0) {
		printf("UP");
		return 0;
	}

	printf("DOWN");

	return 0;
}