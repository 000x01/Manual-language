#include <iostream>

using namespace std;

int main() {
	int a = 3;
	int b = 2;
	bool z = a == b;
	bool x = a != b;
	bool c = a >= b;
	cout << "result a==b = " << z << endl;	// false
	cout << "result a!=b = " << c << endl;	// true
	cout << "result a>=b = " << x << endl;	// true

	int a1 = 3;
	int b1 = 2;
	bool z1 = a != b && a > b;	// если а не равно б и а больше б, то будет true
	bool x1 = a == b || a > b;	// если а не равно б или a больше б, то будет true 
	bool c1 = a == b ^ a > b;	// если оба операнда возврощают разные числа, то будет true

	cout << "\nresult a != b && a > b = " << z1 << endl;	// true
	cout << "result a == b || a > b = " << x1 << endl;		// true
	cout << "result a == b ^ a > b = " << c1 << endl;		// true
	return 0;
}