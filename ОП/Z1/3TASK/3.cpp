//���� ������ ����������
//��22-07� 1 ���������
//����� ������ ����� 3

#include <iostream>
#include <cmath>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	double x;
	int c;
	cout << "������� x: ";
	cin >> x;
	x *= 10;
	c = abs((int)x%10);
	cout << c;
	return 0;
}