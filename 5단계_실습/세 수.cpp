#include <stdio.h>
int main(void)
{
	int a, b, c;

	scanf_s("%d %d %d", &a, &b, &c);
	if (a >= b)
	{
		if (b >= c)
			printf("%d", b);
		else if (b <= c)
			if (a >= c)
				printf("%d", c);
			else
				printf("%d", a);
	}
	else if (a <= b)
	{
		if (b >= c)
			if (a >= c)
				printf("%d", a);
			else
				printf("%d", c);
		else if (b <= c)
			printf("%d", b);
	}

	return 0;
}