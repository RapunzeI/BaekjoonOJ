#include <iostream>
using namespace std;
int main() {
	int N, cnt = 0, sum = 1;
	cin >> N;

	for (int i = 0; i < N; i++) {
		if (N == 1) {
			cnt = 1;
			break;
		}
		if (sum >= N) {
			break;
		}
		else {
			sum += 6 * i;
			cnt++;
		}
	}

	cout << cnt << endl;
}