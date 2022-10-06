//Елин Максим Алексеевич
//КИ22-07Б
// Задания к практике 2, номер 4
//13.09.2022

#include <stdio.h>
#include <stdlib.h>

int main() {
	system("chcp 1251");
	system("cls");

	double a, b, c, d,x;
	printf("Введите a: ");
	scanf_s("%lf", &a);
	printf("Введите b: ");
	scanf_s("%lf", &b);
	printf("Введите c: ");
	scanf_s("%lf", &c);
	printf("Введите d: ");
	scanf_s("%lf", &d);
	printf("Введите x: ");
	scanf_s("%lf", &x);

	if ((x<=b && x>=a) || (x>=b && x<=a)) {
		printf("Входит в промежуток ");
		return 0;
	}
	if ((x <= d && x >= c) || (x >= d && x <= c)) {
		printf("Входит в промежуток ");
		return 0;
	}

	printf("Не принадлежит промежуткам ");
	system("pause");
	return 0;
}