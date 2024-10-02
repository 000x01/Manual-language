#include <iostream>

using namespace std;

int main() {
	int value{ 5 };
	int& refValue{ value };
	cout << refValue << endl;
	refValue = 20;
	cout << refValue << endl;
	return 0;
}