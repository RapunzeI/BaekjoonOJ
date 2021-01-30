#include <stdio.h>
int main(void)
{
	int score, sum, avg;
	sum = 0;

	for (int i = 0; i < 5; i++)
	{
		scanf_s("%d", &score);
		if (score < 40)
			score = 40;
		sum += score;
	}
	avg = sum / 5;
	printf("%d", avg);

	return 0;
}