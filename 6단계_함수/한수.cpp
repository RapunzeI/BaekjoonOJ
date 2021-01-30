#include <stdio.h>
#define size 4

int function(int n)
{
	int array[size], cnt = 1, amount = 0, value = -1, a;
	
	if (n >= 100)
	{
		amount = 99;
		for (int k = 100; k <= n; k++)
		{
			value = -1;
			cnt = 1;
			a = k;
			while (a >= 10) // 자릿수 구하는 반복문
			{
				a = a / 10;
				cnt++;
			}

			a = k;
			for (int i = 0; i < cnt; i++) // 숫자를 배열에 저장하는 반복문
			{
				array[i] = a % 10;
				a = a / 10;
			}

			for (int i = 0; i < cnt - 2; i++)
			{
				if (array[i] + array[i + 2] == 2 * array[i + 1])
				{
					value = 0;
				}
				else
					value = -1;
			}

			if (value == 0)
			{
				amount++;
			}
		}
	}
	else if (n > 0)
	{
		amount = n;
	}

	return amount;
}

int main()
{
	int n;

	scanf_s("%d", &n);

	printf("%d", function(n));

	return 0;
}	