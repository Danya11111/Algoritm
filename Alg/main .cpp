#include <iostream>
using namespace std;

int main() {
	int x, y, x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2 >> x >> y;
	if (y > y2) {
		cout << "N";
	}
	if (y < y1) {
		cout << "S";
	}
	if (x < x1) {
		cout << "W";
	}
	if (x > x2) {
		cout << "E";
	}
}
