#include <iostream>
using namespace std;

int main() {
	int N, cnt = 0, five, three, limit;
	cin >> N;
	limit = N / 5;

	for (int i = limit; i >= 0; i--) {
		if ((N - 5 * i) % 3 == 0) {
			five = i;
			three = (N - five * i) / 3;
			cnt = five + three;
			break;
		}
		else {
			i--;
			cnt = -1;
		}
	}
	cout << cnt;
}