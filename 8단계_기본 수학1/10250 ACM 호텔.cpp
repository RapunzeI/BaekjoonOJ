#include <iostream>
using namespace std;

int main() {
	int T, height, width, N, H, W;

	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> height >> width >> N;

		if (N % height != 0) {
			H = N % height;
			W = N / height + 1;
		}
		else if (N % height == 0) {
			H = height;
			W = N / height;
		}

		if (W < 10) {
			cout << H << "0" << W << endl;
		}
		else if (W >= 10) {
			cout << H << W << endl;
		}
	}
}