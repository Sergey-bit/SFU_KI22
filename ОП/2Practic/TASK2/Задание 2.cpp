#include <iostream>
#include <clocale>
using namespace std;
int main()
{
	setlocale(0, "");
	cout << "Введите N (КОЛ-ВО абитуриентов на экзамене)\n";
	int N;
	cin >> N;
	cout << "Введите M (Сколько сдали математику)\n";
	int M;
	cin >> M;
	cout << "Введите F (Сколько сдали физику) \n";
	int F;
	cin >> F;
	cout << "Введите L (не сдали ни одного предмета) \n";
	int L;
	cin >> L;
	cout << "Кол-во студентов, которые сдали оба предмета " << min((N - L) - M, (N - L) - F);
}