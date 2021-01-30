#include <stdio.h>
#define size 1000

int main()
{
	int cnt, max;
	double avg, score[size] = { 0 }, sum = 0;

	scanf_s("%d", &cnt);

	max = score[0];

	for (int i = 0; i < cnt; i++)
	{
		scanf_s("%lf", &score[i]);
		if (score[i] > max)
		{
			max = score[i];
		}
	}

	for (int i = 0; i < cnt; i++)
	{
		score[i] = score[i] / max * 100;
		sum += score[i];
	}

	avg = (double)sum / cnt;
	printf("%lf", avg);

	return 0;
}