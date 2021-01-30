#include <stdio.h>
#define size 3
int main()
{
	int a, b, c, multi, n, arr[10] = { 0 };

	scanf_s("%d %d %d", &a, &b, &c);
	
	multi = a * b * c;

	for (int i = 0; i < 10; i++)
	{
		n = multi % 10;
		multi = multi / 10;
		arr[n]++;
		if (multi == 0) break;
	}

	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}
}