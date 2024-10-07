#include <iostream>

using namespace std;

int main() {
	for (int i = 1; i <= 10; i++) {
		if (i == 3) {
			continue;
		}
		else if (i == 7) {
			break;
		}
		cout << "result i = " << i << endl;
	}
	return 0;
}