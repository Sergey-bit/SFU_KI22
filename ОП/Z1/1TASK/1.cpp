//���� ������ ����������
//��22-07� 1 ���������
//����� ������� ����� 1 

#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int x, y;
	cout << "������� ������ �����: ";
	cin >> x;// �������� �� ���� ������ �����
	cout << "������� ������ �����: ";
	cin >> y;// �������� �� ���� ������ �����
	x = x + y;
	y = x - y;
	x = x - y;
	cout << x <<", " << y; //����� ������
	return 0;
}