#include <iostream>

using namespace std;

int main() {
	int a{ 5 };
	a += 10;
	cout << "result = " << a << endl;
	a -= 10;
	cout << "result = " << a << endl;
	a *= 10;
	cout << "result = " << a << endl;
	a /= 10;
	cout << "result = " << a << endl;
	a << 10;
	cout << "result = " << a << endl;
	a >> 10;
	cout << "result = " << a << endl;
	return 0;
}