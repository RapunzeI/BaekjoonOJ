#include <stdio.h>
int main(void)
{
	int n;
	scanf_s("%d", &n);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i+1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (int i = 0; i < n-1; i++)
	{
		for (int j = 0; j < n-i-1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}