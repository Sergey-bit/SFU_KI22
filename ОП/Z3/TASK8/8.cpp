//Елин Максим Алексеевич
// КИ22-07Б
// Z3 задачи, задача номер 8 (вторая)
// 20.09.2022

#include <stdio.h>
#include <stdlib.h>
#include <cmath>

float dist(float x1, float y1, float x2, float y2) {
	float yandy = y2 - y1; //(разница y координат)^2
	float xandx = x2 - x1; //(разница x координат) ^ 2
	float range = sqrt(yandy*yandy + xandx*xandx); // корень из суммы разностей в квадрате, собственно формула расстояния
	return range;
}

int main() {
	system("chcp 1251");
	system("cls");

	float x1, y1, x2, y2;
	printf("Введите x, 1 точки: ");
	scanf_s("%f", &x1);
	printf("Введите y, 1 точки: ");
	scanf_s("%f", &y1);
	printf("Введите x, 2 точки: ");
	scanf_s("%f", &x2);
	printf("Введите y, 2 точки: ");
	scanf_s("%f", &y2);
	printf("Расстояние равно: %.2f\n", dist(x1, y1, x2, y2));

	return 0;
}