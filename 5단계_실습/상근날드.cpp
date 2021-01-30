#include <stdio.h>
int main(void)
{
	int ham, bev, price;
	int min = 100000;

	for (int i = 0; i < 3; i++)
	{
		scanf_s("%d", &ham);
		if (min > ham)
		{
			min = ham;
			price = ham;
		}
	}

	min = 100000;
	for (int i = 0; i < 2; i++)
	{
		scanf_s("%d", &bev);
		if (min > bev)
		{
			min = bev;
		}
	}

	printf("%d", price + min - 50);

	return 0;
}