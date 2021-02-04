#include <stdio.h>
#include <string.h>
int main()
{
	int num[8] = { 0 }, strl, sum = 0;
	char dial[16] = { NULL };
	char alphabet[8][4] = { {'A', 'B', 'C', NULL}, {'D', 'E', 'F', NULL},
		{'G', 'H', 'I', NULL}, {'J', 'K', 'L', NULL}, {'M', 'N', 'O', NULL},
		{'P', 'Q', 'R', 'S'}, {'T', 'U', 'V', NULL}, {'W', 'X', 'Y', 'Z'} };

	scanf_s("%s", dial, 16);

	strl = strlen(dial);


	for (int k = 0; k < 8; k++)
	{
		for (int j = 0; j < 4; j++)
		{
			for (int i = 0; i < strl; i++)
			{
				if (dial[i] == alphabet[k][j])
				{
					num[k]++;
				}
			}
		}
	}

	for (int i = 0; i < 8; i++)
	{
		sum += num[i] * (i + 3);
	}

	printf("%d", sum);

	return 0;
}