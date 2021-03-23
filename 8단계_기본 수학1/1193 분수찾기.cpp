#include <iostream>
using namespace std;

int main() {
	int left = 1, right = 1 , X, cnt = 1, sum = 1, set;
	cin >> X;

	while (1) {
		if (sum >= X) {
			break;
		}
		cnt++;
		sum += cnt;
	}

	set = sum - X;
	if (cnt % 2 == 0) {
		right = cnt;
		for (int i = 0; i < cnt - set - 1; i++) {
			left++;
			right--;
		}
	}
	else if (cnt % 2 == 1) {
		left = cnt;
		for (int i = 0; i < cnt - set - 1; i++) {
			left--;
			right++;
		}
	}

	cout << left << "/" << right << endl;
}