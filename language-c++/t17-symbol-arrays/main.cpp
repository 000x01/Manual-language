#include <iostream>

using namespace std;

int main() {
	char text1[]{ 'h', 'e', 'l', 'l', 'o' };
	char text2[]{ 'h', 'e', 'l', 'l', 'o', '\0'};
	char text3[]{ "hello"};
	cout << text1 << endl;
	cout << text2 << endl;
	cout << text3 << endl;
	return 0;
}