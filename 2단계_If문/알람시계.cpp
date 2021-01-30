#include <stdio.h>
int main(void)
{
	int h, m;
	int new_h, new_m;

	scanf_s("%d %d", &h, &m);

	if (m > 45) {
		new_m = m - 45;
		new_h = h;
	}
	else if (m < 45) {
		new_m = m + 15;
		new_h = h - 1;
		if (h == 0)
			new_h = 23;
	}
	else if (m == 45) {
		new_h = h;
		new_m = 00;
	}

	printf("%d %d", new_h, new_m);

	return 0;
}