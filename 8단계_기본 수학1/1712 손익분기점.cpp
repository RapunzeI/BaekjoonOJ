#include <stdio.h>
int main()
{
	int A, B, C, BEP;

	scanf_s("%d %d %d", &A, &B, &C);
	
	if (B - C != 0)
	{
		BEP = -A / (B - C);

		if (BEP < 0)
			printf("-1");
		else
			printf("%d", BEP + 1);
	}
	else
		printf("-1");

	return 0;
}