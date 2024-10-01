#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "ru");

	/*префиксный инкремент*/ /*префиксный декремент*/
	int preIn_1 = 10, preD_2 = 10;
	cout << "ДО Префиксный инкремент = " << preIn_1 << endl;
	cout << "ДО Префиксный декремент = " << preD_2 << endl;
	++preIn_1;
	--preD_2;
	cout << "\nПрефиксный инкремент = " << preIn_1 << endl;
	cout << "Префиксный декремент = " << preD_2 << endl;
	/*постфиксный инкремент*/ /*постфиксный декремент*/
	int postIn_1 = 10, postD_2 = 10;
	cout << "\nДО Постфиксный инкремент = " << postIn_1 << endl;
	cout << "ДО Постфиксный декремент = " << postD_2 << endl;
	postIn_1++;
	postD_2--;
	cout << "\nПосле Постфиксный инкремент = " << postIn_1 << endl;
	cout << "После Постфиксный декремент = " << postD_2 << endl;
	
	return 0;
}