#include <iostream>

using namespace std;

int main() {
	const int rows{ 3 };
	const int columns{ 2 };
	int arr[rows][columns]{
		{1, 2},
		{2, 2},
		{3, 2}
	};
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}

	cout << endl;

	const int rowsZXC{ 3 };
	const int columnsZXC{ 3 };
	int arrZXC[rowsZXC][columnsZXC]{
		{1, 2, 3},
		{2, 2, 3},
		{3, 2, 3}
	};
	for (auto &subarrZXC : arrZXC) {
		for (int &arr : subarrZXC) {
			cout << arr << "\t";
		}
		cout << endl;
	}
	return 0;
}