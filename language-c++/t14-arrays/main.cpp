#include <iostream>

using namespace std;

int main() {
	int arr[4] {100, 200, 300};
	for (int i = 0; i <= 3; i++)
	{
		cout << "Result i = " << i << endl;
		cout << "Result arr = " << arr[i] << endl;
	}
	return 0;
}