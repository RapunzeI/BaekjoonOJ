#include <stdio.h>
#include <string.h>
int main()
{
	char S[21] = { NULL };
	int T, R;

	scanf_s("%d", &T);

	for (int i = 0; i < T; i++)
	{
		scanf_s("%d", &R);
		
		scanf_s("%s", S, 20);
		for (int k = 0; k < strlen(S); k++)
		{
			for (int j = 0; j < R; j++)
			{
				printf("%c", S[k]);
			}
		}
		printf("\n");
	}

	return 0;
}