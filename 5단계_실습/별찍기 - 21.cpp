#include <stdio.h>
int main(void)
{
	int n;
	scanf_s("%d", &n);

	for (int i = 0; i < n; i++)
	{
		if (n % 2 == 0)
		{
			for (int j = 0; j < n / 2; j++)
				printf("* ");
			printf("\n");
			for (int k = 0; k < n / 2; k++)
				printf(" *");
			printf("\n");
		}
		else
		{
			for (int j = 0; j < n - n / 2; j++)
				printf("* ");
			printf("\n");
			for (int k = 0; k < n / 2; k++)
				printf(" *");
			printf("\n");
		}
	}
	return 0;
}