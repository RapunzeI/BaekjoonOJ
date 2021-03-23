#include <iostream>
using namespace std;

int main() {
	int A, B, V, day;
	cin >> A >> B >> V;

	if ((V - B) % (A - B) == 0) {
		day = (V - B) / (A - B);
	}
	else {
		day = (V - B) / (A - B) + 1;
	}

	cout << day << endl;
}