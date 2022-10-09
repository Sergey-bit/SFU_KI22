#include <iostream>
#include <clocale>
using namespace std;
int main()
{
	setlocale(0, "");
	cout << "Введите K (2<=K<=100) (ВО СКОЛЬКО РАЗ ГУЛИВЕР БОЛЬШЕ ЛИЛИПУТОВ)\n";
	int K;
	cin >> K;
	cout << "Введите M (2<=M<=100) (КОЛИЧЕСТВО СЛОЕВ В МАТРАСЕ ГУЛИВЕРА) \n";
	int M;
	cin >> M;
	cout << "количество матрацев, использованных для изготовления постели Гулливера = " << K*K * M << "\n";
}