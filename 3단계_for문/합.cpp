#include <stdio.h>
int main(void)
{
	int n;
	int sum = 0;

	scanf_s("%d", &n);

	for (int i = 0; i < n; i++) {
		sum += i + 1;
	}
	printf("%d", sum);

	return 0;
}