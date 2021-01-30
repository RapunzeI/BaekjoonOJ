#include <stdio.h>
#define size 80
int main()
{
	int n, value = 0, sum = 0;;

	scanf_s("%d", &n);
	char ox[size];

	for (int i = 0; i < n; i++)
	{
		scanf_s("%s", &ox, sizeof(ox));

		for (int j = 0; j < sizeof(ox); j++)
		{
			if (ox[j] == 'O')
			{
				value++;
				sum += value;
			}
			else if (ox[j] == 'X')
			{
				value = 0;
			}
			else break;
		}
		printf("%d\n", sum);

		value = 0;
		sum = 0;
	}

	return 0;
}