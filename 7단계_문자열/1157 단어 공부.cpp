#include <stdio.h>
#include <string.h>
int main()
{
	int alphabet[26] = { 0, }, max, cnt;
	char S[1000001] = { NULL }, ch;

	scanf_s("%s", S, 1000000);

	cnt = strlen(S);

	for (int k = 0; k < cnt; k++)
	{
		if (S[k] >= 'a' && S[k] <= 'z')
		{
			alphabet[S[k] - 'a'] ++;
		}
		else if (S[k] >= 'A' && S[k] <= 'Z')
		{
			alphabet[S[k] - 'A'] ++;
		}
	}

	max = 0;
	for (int k = 0; k < 26; k++)
	{
		if (alphabet[k] != 0)
		{
			if (alphabet[k] > max)
			{
				max = alphabet[k];
				ch = k + 65;
			}
			else if (alphabet[k] == max)
			{
				ch = '?';
			}
		}
	}

	printf("%c", ch);

	return 0;
}