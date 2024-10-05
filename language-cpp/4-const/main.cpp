#include <iostream>

using namespace std;

int main() {
	int abc{ 123 };	
	const int a{ 10 };
	const int b{ a };
	const int c{ abc };
	const float PI{ 3.14 };
	cout << abc << endl;
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	cout << PI << endl;
	return 0;
}