#include <stdio.h>
#include <string.h>

int main()
{
	char word[101] = { NULL }, alphabet[26];
	int N, cnt = 0, strl, checker = 0;

	scanf_s("%d", &N);

	for (int i = 0; i < N; i++)
	{
		checker = 0;
		for (int i = 0; i < 26; i++)
		{
			alphabet[i] = 'a' + i;
		}

		scanf_s("%s", word, 101);

		strl = strlen(word);
		for (int k = 0; k < strl; k++)
		{
			if (alphabet[word[k] - 'a'] == NULL)
			{
				checker = -1;
				break;
			}
			else if (word[k] != word[k + 1] && word[k + 1] != NULL)
			{
				alphabet[word[k] - 'a'] = NULL;
			}
		}

		if (checker != -1)
		{
			cnt++;
		}
	}

	printf("%d", cnt);

	return 0;
}