//Елин Максим Алексеевич
// КИ22-07Б
// Z3 задачи, задача номер 9 (третья)
// 20.09.2022

#include <stdio.h>
#include <stdlib.h>

float min_or_max(float a, float b, float c) {
	float min,max;

	if (b > c) { //определяем мин и макс для удобного представления кода
		min = c;
		max = b;
	}

	else { //если b меньше или равно c
		min = b;
		max = c;
	}

	if (a - 0.5 > 0) {
		printf("a больше 0.5! \n");
		return max;
	}
	else {
		printf("a меньше или равно 0.5! \n");
		return min;
	}
}

int main() {
	system("chcp 1251");
	system("cls");

	float a,b,c;
	printf("Введите a: ");
	scanf_s("%f", &a);
	printf("Введите b: ");
	scanf_s("%f", &b);
	printf("Введите c: ");
	scanf_s("%f", &c);

	printf("Итог: %.2f\n", min_or_max(a,b,c)); //Вызов функции

	return 0;
}