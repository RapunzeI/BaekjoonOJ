#include <stdio.h>
#define size 1000000
int num[size];
int main()
{
	int n, max = -1000000, min = 1000000;

	scanf_s("%d", &n);
	
	for (int i = 0; i <= n - 1; i++)
	{
		scanf_s("%d", &num[i]);
	}
	for (int i = 0; i <= n - 1; i++)
	{
		if (num[i] >= max)
			max = num[i];
	}
	for (int i = 0; i <= n - 1; i++)
	{
		if (num[i] <= min)
			min = num[i];
	}

	printf("%d %d", min, max);
}