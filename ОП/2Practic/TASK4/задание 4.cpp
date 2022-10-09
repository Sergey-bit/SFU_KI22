#include <iostream>
#include <clocale>
using namespace std;
int main()
{
	setlocale(0, "");
	cout << "Введите T (ВРЕМЯ СКАЧИВАНИЯ ПРОГРАММЫ (МИН) )\n";
	int T;
	cin >> T;
	cout << "Введите Y (ЦЕНА ТРАФИКА ЗА 1 ГИГАБАЙТ) \n";
	int Y;
	cin >> Y;
	cout << "Введите C (СКОРОСТЬ ПЕРЕДАЧИ ДАННЫХ ПО ЛОКАЛЬНОЙ СЕТИ (В БИТ/СЕК)) \n";
	int C;
	cin >> C;
	int x = (8 * 1024);
	int d = (x * 1024);
	int z = (d * 1024);
	cout << "РАЗМЕР СКАЧАННОГО ФАЙЛА В ГИГАБАЙТАХ" << (T * 60 * C) / z << "\n";
	int G = (T * 60 * C) / z - 1;
	cout << "заплачено за трафик " << G * Y << "\n";
}