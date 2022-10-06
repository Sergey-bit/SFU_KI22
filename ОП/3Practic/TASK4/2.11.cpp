//Елин Максим Алексеевич
//КИ22-07Б
//Практика номер 3
//11 Вариант

#include <stdio.h>
#include <stdlib.h>


int main() {
	system("chcp 1251");
	system("cls");
	double N, M;
	printf("Введите N: ");
	scanf_s("%lf", &N);
	printf("Введите M: ");
	scanf_s("%lf", &M);

	//if (N < 1 || N > 1e9 || M < 1 || M > 1e9) { // 1 <= N <= 10^9 and 1 <= M <= 10^9, победителя нет
	//	printf("0");
	//	return 0;
	//}

	if ((N == 1 && M == 1) || (N < 1 || N > 1e9 || M < 1 || M > 1e9)) {//Если точка лежит на (1;1) и ниже - нет победителей
		printf("0");
		return 0;
	}

	if (N == 1 || M == 1) { // победил первый, если одна из координат равна 1
		printf("1");
		return 0;
	}

	printf("2");// в остальных случаях - победил второй
	return 0; 
}