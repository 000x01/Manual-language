#include <iostream>

using namespace std;

int main() {
	int a{ 10 };
	int b{ 5 };
	int c{ a - b };
	cout << "result a = " << a << endl;
	cout << "result b = " << b << endl;
	cout << "result a - b = " << c << endl;
	
	int z{ 10 };
	int x{ 10 };
	cout << "\nresut z + x = " << z + x << endl;
	cout << "resut z - x = " << z - x << endl;
	cout << "resut z * x = " << z * x << endl;
	cout << "resut z / x = " << z / x << endl;
	cout << "resut z % x = " << z % x << endl;

	// префиксный декремент
	int preD_A{ 5 };
	int preD_B{ --preD_A };
	cout << "\nresult a = " << preD_A << endl;
	cout << "result b = " << preD_B << endl;

	// постфиксный декремент
	int postD_A{ 5 };
	int postD_B{ postD_A-- };
	cout << "\nresult a = " << postD_A << endl;
	cout << "result b = " << postD_B << endl;

	// префиксный инкремент
	int preI_A{ 5 };
	int preI_B{ ++preI_A };
	cout << "\nresult a = " << preI_A << endl;
	cout << "result b = " << preI_B << endl;

	// префиксный декремент
	int postI_A{ 5 };
	int postI_B{ postI_A++ };
	cout << "\nresult a = " << postI_A << endl;
	cout << "result b = " << postI_B << endl;
	return 0;
}