#include <iostream>
#include <clocale>
#include <string>
using namespace std;

void f1(int N) {
	for (N; N != 0; N = N - 1) {
		string str = to_string(N);
		int Z = str.length();
		int K = N;
		int s = 0;
		while (Z != 0) {
			s = s + (K % 10);
			K = K / 10;
			Z = Z - 1;
		}
		if (N % s == 0) {
			cout << N << endl;
		}
	}
}

int main() {
	setlocale(0, "");
	int N;
	cout << "Введите значение N ";
	cin >> N;
	f1(N);
}