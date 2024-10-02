#include <iostream>

using namespace std;

int main() {
	const int rows = 3, columns = 2;
	int arr[rows][columns]{ {1, 1},{2, 1},{3, 1} };
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	return 0;
}