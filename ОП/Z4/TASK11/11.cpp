//���� ������ ����������
//��22-07� 1 ���������
// Z4 �������, 2 �������
// 27.09.2022

#include <iostream>
using namespace std;

void print_diag(int s) {
	for (int i = 1; i < s+1; i++) {
		cout.width(i);
		cout << "*" << endl;
	}
}

int main() {
	setlocale(LC_ALL, "Russian");

	int s;
	cout << "������� s: ";
	cin >> s;

	if (s <= 0) {
		cout << "��������! �� ����������� �������: S>0!!";
		return 0;
	}

	print_diag(s);

	return 0;
}