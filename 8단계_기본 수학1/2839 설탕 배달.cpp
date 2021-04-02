#include <iostream>
using namespace std;

int main() {
	int N, remain;
	cout << N;

	int i = N / 5;
	remain = N % 5;
	while (1) {

		if (remain % 3 != 0) {
			i--;
		}
		else {
			break;
		}
	}
}