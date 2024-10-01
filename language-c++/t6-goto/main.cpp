#include <iostream>

using namespace std;

int main() {
	cout << "1" << endl;
	cout << "2" << endl;
	goto link;
	cout << "3" << endl;
	cout << "4" << endl;
	cout << "5" << endl;
	link:
	cout << "6" << endl;
	cout << "7" << endl;

	return 0;
}