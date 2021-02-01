#include <stdio.h>
#include <string.h>
int main()
{
	char S[1000000];
	int cnt = 0, strl;

	fgets(S, sizeof(S), stdin);

	strl = strlen(S);

	for (int i = 1; i < strl - 2; i++)
	{
		if (S[i] == ' ')
		{
			cnt++;
		}
	}

	if (strl == 2 && S[0] == ' ')
		cnt = -1;

	printf("%d", cnt + 1); 
}