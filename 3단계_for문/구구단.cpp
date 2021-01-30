#include <stdio.h>
int main(void)
{
	int n;

	scanf_s("%d", &n);

	for (int i = 0; i < 9; i++)
	{
		int result = n * (i + 1);
		printf("%d * %d = %d\n", n, i + 1, result);
	}
}