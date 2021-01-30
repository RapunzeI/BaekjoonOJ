#include <stdio.h>
int main()
{
	int n[10], rem[10], k = 1, cnt = 0;

	for (int i = 0; i <= 9; i++)
	{
		scanf_s("%d", &n[i]);
	}
	for (int i = 0; i <= 9; i++)
	{
		rem[i] = n[i] % 42;
	}
	for (int i = 0; i <= 9; i++)
	{
		k = 1;
		while ((i + k) <= 9)
		{
			if (rem[i] == rem[i + k])
			{
				rem[i + k] = -1;
			}
			k++;
		}
	}
	for (int i = 0; i <= 9; i++)
	{
		if (rem[i] != -1)
		{
			cnt++;
		}
	}
	printf("%d", cnt); 
}