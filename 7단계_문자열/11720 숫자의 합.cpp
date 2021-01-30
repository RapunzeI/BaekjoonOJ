#include <stdio.h>
int main()
{
	int n, sum = 0;
	char ch[100] = { 0, };

	scanf_s("%d", &n);

	scanf_s("%s", ch, 100);

	for (int i = 0; i < n; i++)
	{
		sum += ch[i] - '0';
	}

	printf("%d", sum);

	return 0;
}