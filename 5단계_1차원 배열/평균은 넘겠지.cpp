#include <stdio.h>
int main()
{
	int c, stud, score[1000], cnt = 0;
	double sum = 0, avg;

	scanf_s("%d", &c);

	for (int i = 0; i < c; i++)
	{
		scanf_s("%d", &stud);

		for (int k = 0; k < stud; k++)
		{
			scanf_s("%d", &score[k]);
			sum += score[k];
		}
		avg = (double)sum / stud;

		for (int k = 0; k < stud; k++)
		{
			if (score[k] > avg)
			{
				cnt++;
			}
		}

		printf("%.3lf%%\n", (double)cnt / stud * 100);

		avg = 0;
		sum = 0;
		cnt = 0;
	}

	return 0;
}