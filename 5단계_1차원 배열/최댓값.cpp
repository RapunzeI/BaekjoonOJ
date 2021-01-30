#include <stdio.h>
int main()
{
	int n[9], max, location;

	for (int i = 0; i <= 8; i++)
	{
		scanf_s("%d", &n[i]);
	}
	max = n[0];
	for (int i = 0; i <= 8; i++)
	{
		if (max <= n[i])
		{
			max = n[i];
			location = i + 1;
		}
	}
	printf("%d %d", max, location);
}