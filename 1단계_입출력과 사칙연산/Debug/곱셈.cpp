#include <stdio.h>
int main(void)
{
	int a, b;

	scanf_s("%d %d", &a, &b);

	int num1;
	num1 = (b % 10) * (a % 10 + (a % 100 - a % 10) + (a - a % 100));
	printf("%d\n", num1);

	int num2;
	num2 = (b % 100 - b % 10) * (a % 10 + (a % 100 - a % 10) + (a - a % 100));
	printf("%d\n", num2/10);

	int num3;
	num3 = (b - b % 100) * (a % 10 + (a % 100 - a % 10) + (a - a % 100));
	printf("%d\n", num3/100);

	int result;
	result = num1 + num2 + num3;
	printf("%d", result);

	return 0;
}