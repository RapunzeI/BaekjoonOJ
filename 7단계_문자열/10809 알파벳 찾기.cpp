#include <stdio.h>
int main()
{
	char S[100] = { NULL };
	int alphabet[26] = { 0 };

	scanf_s("%s", S, 100);

	for (int i = 'a'; i <= 'z'; i++)
	{
		for (int k = 0; k < 100; k++)
		{
			if (S[k] == i)
			{
				alphabet[i - 97] = k + 1;
				break;
			}
		}
	}

	for (int i = 0; i < 26; i++)
	{
		printf("%d ", alphabet[i] - 1);
	}

	return 0;
}