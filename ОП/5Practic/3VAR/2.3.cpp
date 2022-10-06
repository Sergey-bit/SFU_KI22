//���� ������ ����������
//��22-07� 1 ���������
// �������� ����� 5, ������� 2
// ������� 3

#include <iostream>
#include <cmath>
using namespace std;
bool automorphic_number(int N) {

	int sq_n = N * N; 

	for (;N>0; sq_n /= 10, N /= 10) {
		
		if (sq_n % 10 != N % 10)
			return false;
	
	}

	return true;
	
}

int main() {
	setlocale(LC_ALL, "Russian");

	int N;
	cout << "������� ����������� ����� (�� 1 �� 1000): ";
	cin >> N;

	if (N <= 0 || N>=1000) {

		cout << "�� ����������� ����� ��� �� �������� �� �������! ";
		return 0;

	}

	if (automorphic_number(N)) {

		cout << "��";
		return 0;

	}

	cout << "���";

	return 0;
}