#include <stdio.h>
#include <string.h>
int main()
{
	int a, b;
	char n1[4] = { NULL }, n2[4] = { NULL };

	scanf_s("%d %d", &a, &b);

	for (int i = 0; i < 3; i++)
	{
		n1[i] = a % 10 + '0';
		a = a / 10;

		n2[i] = b % 10 + '0';
		b = b / 10;
	}

	if (strcmp(n1, n2) > 0)
		printf("%s", n1);
	else if (strcmp(n1, n2) < 0)
		printf("%s", n2);

	return 0;
}