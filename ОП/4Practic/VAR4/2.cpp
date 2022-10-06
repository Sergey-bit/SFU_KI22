//Елин Максим Алексеевич
// КИ22-07Б
// Практика 4, вариант 4
// 20.09.2022

#include <stdio.h>
#include <stdlib.h>
#include <cmath>


double f1(double x) {
	double power_of_e = exp(2*x); //e в степени
	return (power_of_e - 2.19e6); //результат первой функции
}

double f2(double x) {
	double expression = 5 * x + 2; //выражение под корнем
	if (expression < 0) { 
		double sqrt_of_exp = -(pow(-expression, 1.0 / 3)); //предотвращение ошибок при отрицательном числе в степени
		return sqrt_of_exp;
	}
	else {
		double sqrt_of_exp = pow(expression,1.0/3); // 1/3 степень числа  = корень 3 степени из числа, но лишь приблизительно
		return sqrt_of_exp;
	}
}

int main() {
	system("chcp 1251");
	system("cls");

	double x;
	printf("Введите x: ");
	scanf_s("%lf", &x);
	double y = f1(x) + f2(x);

	printf("Сумма равна: %.16lf", y);
	return 0;
}