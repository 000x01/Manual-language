#include <iostream>

using namespace std;

int main() {
	int a{ 5 };
	int b{ 2 };
	int c = a > b ? a + b : a - b;
	cout << "result c = " << c << endl;

	int z = 5;
	int x = 3;
	if (z > x) {
		cout << "\nresult z = " << z << endl;
	}
	else if (z < x) {
		cout << "\nresult x = " << x << endl;
	}
	else if (z == x) {
		cout << "\nresult {z == x} = " << z << "" << x << endl;
	} else {
		cout << "\nno result" << endl;
	}
	return 0;
}