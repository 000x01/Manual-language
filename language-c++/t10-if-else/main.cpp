#include <iostream>

using namespace std;

int main() {
	int a = 0, b = 0;
	cin >> a;
	cin >> b;
	if (a >= b) {
		cout << "Result a = " << a << endl;
	}
	else if (a < b) {
		cout << "Result b = " << b << endl;
	}
	else {
		cout << "Result = Error " << endl;
	}
	return 0;
}