#include <stdio.h>
int main(void)
{
	int n, star, i;
	scanf_s("%d", &n);
	star = n;

	for (i = 0; i < n; i++)
	{	
		for (int k = 0; k < i; k++)
			printf(" ");
		for (int j = 0; j < 2 * star - 1; j++)
		{
			printf("*");
		}
		printf("\n");
		star--;
	}
	for (i = 1; i < n; i++)
	{
		for (int k = 0; k < n - i - 1; k++)
			printf(" ");
		for (int j = 0; j < 2 * i + 1; j++)
			printf("*");
		printf("\n");
	}
	return 0;
}