#include <stdio.h>

int main(void)
{
	int a;
	int b;

	scanf_s("%d %d", &a, &b);
	printf("%d", a - b);

	return 0;
}