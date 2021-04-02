#include <iostream>
using namespace std;

int main() {
	int k, n, t;

	cin >> t;

	for (int i = 0; i < t; i++) {
		int array[14] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14 };

		cin >> k;
		cin >> n;

		for (int m = 1; m <= k; m++) {
			for (int j = 0; j < n; j++) {
				array[j + 1] = array[j + 1] + array[j];
			}
		}
		cout << array[n - 1] << endl;
	}
}