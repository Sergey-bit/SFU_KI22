//Елин Максим Алексеевич
//КИ22-07Б
//Практика номер 4
//1 Вариант

#include <stdio.h>
#include <stdlib.h>
#include <cmath>

double f1(double x) {
	return 10.0 / (x * x + 1);
}

double f2(double x) {
	double in_sqrt5 = 100*sin(x*x); //выражение под корнем

	if (in_sqrt5 < 0) //в случае отрицательного значения, временно убираем минус, потом добавляем вновь
		return -pow(-in_sqrt5, 1.0 / 5) + 0.3e6;

	return pow(in_sqrt5, 1.0 / 5) + 0.3e6; 

}

int main() {
	system("chcp 1251");
	system("cls");
	
	double x;
	printf("Введите x: ");
	scanf_s("%lf", &x);
	double y = f1(x) + f2(x);

	//if (y / 1.0e10 >= 1.0) { //Слишком большие числа будут представлены в экспоненциальном виде
	//	printf("%.16e", y);
	//	return 0;
	//}

	printf("%.16lf", y);

	return 0;
}