#include <stdio.h>
#include <string.h>
int main()
{
	char input[101] = { NULL };
	int strl, cnt = 0;

	scanf_s("%s", input, 101);

	strl = strlen(input);

	for (int i = 0; i < strl; i++)
	{
		if (input[i] >= 'a' && input[i] <= 'z')
		{
			if (input[i] == 'd' && input[i + 1] == 'z' && input[i + 2] == '=')
			{
				cnt--;
			}
			else if (input[i] == 'n' && input[i + 1] == 'j')
			{
				cnt--;
			}
			else if (input[i] == 'l' && input[i + 1] == 'j')
			{
				cnt--;
			}
			cnt++;
		}
	}

	printf("%d", cnt);

	return 0;
}