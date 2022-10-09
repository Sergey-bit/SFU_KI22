#include <iostream>
#include <clocale>
using namespace std;
int main()
{
	setlocale(0, "");
	cout << "Введите N (КОЛ-ВО МЕСЯЦЕВ)\n";
	int N;
	cin >> N;
	cout << "Введите K (ГОДОВЫЕ)\n";
	int K;
	cin >> K;
	cout << "Введите S (ВНЕСЕНО) \n";
	int S;
	cin >> S;

	cout << "ПРИЧИТАЕТСЯ КЛИЕНТУ = " << (S + (S * K)) * N;
}