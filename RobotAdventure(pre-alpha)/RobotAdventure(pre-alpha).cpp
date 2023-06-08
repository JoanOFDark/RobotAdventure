#include <iostream>

using namespace std;

void Draw(int& x, int& y) {
	for (int i = 0; i <= 15; ++i) {
		for (int j = 0; j <= 15; ++j) {
			if (i == 15 || j == 15) cout << '#';

			else if (i == y && j == x) cout << 'R';

			else if (i == 0 && j == 6) cout << 'h';
			else if (i == 1 && j == 11) cout << 'h';
			else if (i == 4 && j == 1) cout << 'h';
			else if (i == 4 && j == 11) cout << 'h';
			else if (i == 10 && j == 14) cout << 'h';
			else cout << ' ';
		}
		cout << endl;
	}
}


void Left(int num, int& x, int& y) {
	x -= num;
	Draw(x, y);
	cout << "Left " << num << endl << endl;
}

void Right(int num, int& x, int& y) {
	x += num;
	Draw(x, y);
	cout << "Right " << num << endl << endl;
}

void Up(int num, int& x, int& y) {
	y -= num;
	Draw(x, y);
	cout << "Up " << num << endl << endl;
}

void Down(int num, int& x, int& y) {
	y += num;
	Draw(x, y);
	cout << "Down " << num << endl << endl;
}

void Logic(int& x, int& y) {
	Up(3, x, y);
	Right(3, x, y);
	Up(1, x, y);
	Right(4, x, y);
	Left(4, x, y);
	Down(1, x, y);
	Left(5, x, y);
	Up(7, x, y);
	Left(4, x, y);
	Right(10, x, y);
	Up(3, x, y);
	Down(3, x, y);
	Left(5, x, y);
	Up(4, x, y);
	Left(1, x, y);
	Down(14, x, y);
	Right(2, x, y);
}

int main() {
	int x = 7,
		y = 14;

	Draw(x, y);
	Logic(x, y);
}