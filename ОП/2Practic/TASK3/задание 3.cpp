#include <iostream>
#include <clocale>
using namespace std;
int main()
{
	setlocale(0, "");
	cout << "Введите v1 (объем воды 1)\n";
	int v1;
	cin >> v1;
	cout << "Введите v2 (объем воды 2)\n";
	int v2;
	cin >> v2;
	cout << "Введите t1 (температура воды 1) \n";
	int t1;
	cin >> t1;
	cout << "Введите t2 (температура воды 2) \n";
	int t2;
	cin >> t2;

	cout << "объем образовавшейся смеси = " << v1 + v2 << "\n";
	cout << "температура образовавшейся смеси = " << (t1 + t2) / 2 << "\n";
}