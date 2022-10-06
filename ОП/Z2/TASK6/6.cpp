//Елин Максим Алексеевич
// КИ22-07Б
//Задания к практике номер 2, задание 6
// 13.09.2022


#include <stdio.h>
#include <Stdlib.h>
#include <cmath>

int main() {
	system("chcp 1251");
	system("cls");

	double a, b, c, x1,x2,D,xinf1,xinf2;
	printf("Введите число x^2 (a): ");
	scanf_s("%lf", &a);
	printf("Введите число x^1 (b): ");
	scanf_s("%lf", &b);
	printf("Введите число при x^0 (c): ");
	scanf_s("%lf", &c);
	D = b*b - 4 * a * c;
	if ( D < 0) {
		printf("Отсутствуют действительные значения x ");
		return 0;
	}
	x1 = (sqrt(D) - b) / (2 * a);
	x2 = (-1*sqrt(D) -b) / (2 * a);
	if (x1 == x2) {
		xinf1 = a*x1*x1 + b*x1 + c;
		printf("Один корень, равный: %.2lf\nПри подставлении корня получается: %.2lf", x1, xinf1);
		return 0;
	}
	xinf1 = a * x1*x1 + b * x1 + c;
	xinf2 = a * x2*x2 + b * x2 + c;
	printf("Два корня, равных: %.2lf, %.2lf\nПри подставлении корней получается (x1 и x2): %.2lf, %.2lf ", x1,x2, xinf1,xinf2);
	
	system("pause");
	return 0;
}