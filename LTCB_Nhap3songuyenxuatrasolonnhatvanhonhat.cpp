#include <iostream>
using namespace std;
int main() {
	int a, b, c;
	cout << "nhap 3 so nguyen : ";
	cin >> a >> b >> c;
	int max = a;
	if (b > max) {
		max = b;
	}
	if (c > max) {
		max = c;
	}
	int min = a;
	if (b < min) {
		min = b;
	}
	if (c < min) {
		min = c;
	}
	cout << "so lon nhat la : " << max << endl;
	cout << "so nho nhat la : " << min << endl;
	return 0;
}
