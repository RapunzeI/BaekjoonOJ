#include <stdio.h>
int main(void)
{
	int n, tens, units, new_n;
	int result_n = 0, new_tens = 0, new_units = 0;
	int i = 0;

	scanf_s("%d", &n);

	tens = n / 10;
	units = n % 10;
	new_units = tens + units;
	new_tens = units * 10;

	while (n != result_n)
	{
		if (new_units >= 10)
			result_n = new_tens + new_units % 10;
		else
			result_n = new_tens + new_units;
		new_n = result_n;
		i++;
		tens = new_n / 10;
		units = new_n % 10;
		new_units = tens + units;
		new_tens = units * 10;
	}
	if (n == 0)
		i++;

	printf("%d", i);

	return 0;
}