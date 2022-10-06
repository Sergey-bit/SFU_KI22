//Елин Максим Алексеевич
// КИ22-07Б
// Z3 задачи, задача номер 7 (первая)
// 20.09.2022

#include <stdio.h>
#include <stdlib.h>

int find_most_frequent(int a, int b, int c, int d) {
	int sumzif = a + b + c + d;
	if (sumzif == 2) // если 2 единицы, то и 2 нуля
		return -1;
	if (sumzif < 2) // если меньше 2 единиц, то нулей очевидно больше
		return 0;
	else //если больше 2, то единиц больше
		return 1;
}

int main() {
	system("chcp 1251");
	system("cls");

	int a, b, c, d;
	printf("Введите a: ");
	scanf_s("%d", &a);
	printf("Введите b: ");
	scanf_s("%d", &b);
	printf("Введите c: ");
	scanf_s("%d", &c);
	printf("Введите d: ");
	scanf_s("%d", &d);
	printf("Итог: %d\n", find_most_frequent(a, b, c, d));

	return 0;
}