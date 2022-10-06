//Елин Максим Алексеевич
//КИ22-07Б
// Задания к практике 2, номер 4
//13.09.2022

#include <stdio.h>
#include <stdlib.h>

int main() {
	system("chcp 1251");
	system("cls");

	double a, b, c, d, minA,minB,maxA,maxB;
	printf("Введите 1 число промежутка А: ");
	scanf_s("%lf", &a);
	printf("Введите 2 число промежутка A: ");
	scanf_s("%lf", &b);
	printf("Введите 1 число промежутка B: ");
	scanf_s("%lf", &c);
	printf("Введите 2 число промежутка B: ");
	scanf_s("%lf", &d);

	if (a < b) {
		minA = a;
		maxA = b;
	}
	else {
		minA = b;
		maxA = a;
	}
	if (c < d) {
		minB = c;
		maxB = d;
	}
	else {
		minB = d;
		maxB = c;
	}
	if (minA == minB && maxA == maxB) {
		printf("A = B ");
		return 0;
	}
	if (minB <= minA && maxA <= maxB) { //--minB---minA---maxA---maxB
		printf("A входит в B");
		return 0;
	}
	if (minA <= minB && maxB <= maxA) { //--minA---minB---maxB---maxA
		printf("B входит в A");
		return 0;
	}
	
	if ((minA < minB && minB <= maxA && maxA < maxB) || (minB < minA && minA <= maxB && maxA > minB)) { // --minA---minB---maxA---maxB
		printf("Другое пересечение");
		return 0;
	}

	printf("Нет пересечений ");
	system("pause");
	return 0;
}