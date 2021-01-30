#include <stdio.h>

int main()
{
	int sum, n;
	int array[10000];

	for (int i = 1; i <= 10000; i++)
	{
		n = i;
		sum = n;

		while (1)
		{
			sum += n % 10;
			n = n / 10;

			if (n < 10) break;
		}
		sum += n;
		
		if (sum < 10000)
		{
			array[sum] = -1;
		}
	}

	for (int i = 1; i < 10000; i++)
	{
		if (array[i] != -1)
		{
			printf("%d\n", i);
		}
	}

	return 0;
}