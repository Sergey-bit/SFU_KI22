#include <iostream>
#include <clocale>
using namespace std;
int main()
{
	setlocale(0, "");
	cout << "Введите D (КУРС ДОЛЛАРА)\n";
	int D;
	cin >> D;
	cout << "Введите E (КУРС ЕВРО) \n";
	int E;
	cin >> E;
	cout << "Введите K (КОЛ-ВО РУБЛЕЙ В КАРМАНЕ) \n";
	int K;
	cin >> K;

	cout << "МОЖНО РАЗМЕНЯТЬ ДОЛЛАРОВ = " << K / D << "\n";
	cout << "МОЖНО РАЗМЕНЯТЬ ЕВРО = " << K / E << "\n";
}