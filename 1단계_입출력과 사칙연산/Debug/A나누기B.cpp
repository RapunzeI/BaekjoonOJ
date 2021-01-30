#include <stdio.h>

int main(void)
{
	double a;
	double b;

	scanf_s("%lf %lf", &a, &b);
	printf("%.9lf", a / b);

	return 0;
}