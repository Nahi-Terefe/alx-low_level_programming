#include "main.h"

/**
 * cap_string - captilize first letter of all words in a string.
 * @s: string pointer
 * Return: a string.
 */
char *cap_string(char *s)
{
	int i, j;
	char c[] = " \t\n,;.!\?\"(){}";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; c[j] != '\0'; j++)
		{
			if (s[i] == c[j])
			{
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				{
					s[i + 1] = s[i + 1] - 32;
				}
			}
			else if (i == 0)
			{
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				{
					s[i + 1] = s[i + 1] - 32;
				}
			}
		}
	}

	return (s);
}
