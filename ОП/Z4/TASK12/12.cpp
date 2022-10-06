#include <iostream>

using namespace std;
void print_rect(int x, int y, int sx, int sy) {
	if (x >= 0 && y >= 0) {

		for (int i = 0; i < y; i++) 
			cout << endl;

		for (int d = 0; d < sy; d++) {

			cout.width(x+1);

			for (int m = 0; m < sx; m++) 
				cout << "@";

			cout << endl;
		}

	}

	else
		cout << "ќшибка";
}
int main() {
	setlocale(LC_ALL, "Russian");

	int x, y, sx, sy;
	cout << "¬ведите x и y (через пробел): ";
	cin >> x >> y;
	cout << "¬ведите sx и sy (через пробел): ";
	cin >> sx >> sy;

	print_rect(x,y,sx,sy);

	return 0;
}