#include <stdio.h>
int main(void)
{
	int a = 1;
	int b = 1;

	while (a != 0 && b != 0) {
		scanf_s("%d %d", &a, &b);
		if (a == 0 && b == 0)
			break;
		printf("%d\n", a + b);
	}

	return 0;
}