#include <iostream>

using namespace std;

int main() {
	int arr_a[4]{ 1, 2, 3, 4 };
	//    size[4]{ 0, 1, 2, 3 } 

	int arr_b[]{ 1, 2, 3, 4 };
	cout << "Length: " << sizeof(arr_b) / sizeof(arr_b[0]) << endl;

	int arr_c[]{ 1, 2, 3, 4 };
	int count = size(arr_c);
	cout << "\nLength: " << count << endl;

	cout << "\n";

	const int n{ 4 };
	int arr_z[n]{ 1, 2, 3, 4 };
	for (int i = 0; i < n; i++) {
		cout << "result i = " << arr_z[i] << endl;
	}

	cout << "\n";

	int arr_x[]{ 1, 2, 3, 4 };
	int sum{};
	for (int i{}; i < size(arr_x); sum += arr_x[i++])
		cout << "result sum = " << sum << endl;

	cout << "\n";

	int arr_v[4]{ 1, 2, 3, 4 };
	for (int n: arr_v) {
		cout << "result = " << n << endl;
	}

	cout << "\n";

	float arr_f[4]{ 1, 2, 3, 4 };
	for (auto n: arr_f) {
		cout << "result = " << n << endl;
	}

	cout << "\n";

	const int max{ 6 };
	int cinValue[max];

	int j{};
	cout << "Enter numbers = " << endl;
	while (j < max) {
		cin >> cinValue[j];
		j++;
	}

	for (int j = 0; j < max; j++) {
		cout << cinValue[j] << "\t";
	}
	cout << endl;

	return 0;
}