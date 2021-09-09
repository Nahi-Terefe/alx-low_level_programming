#include "main.h"

/**
 * cap_string - captilize first letter of all words in a string.
 * @s: string pointer
 * Return: a string.
 */
char *cap_string(char *s)
{

	char separator[] = " \t\n,;.!?\"(){}";
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{

		if (s[i] >= 's' && s[i] <= 'z')
		{

			if (i == 0)
				s[i] -= 32;

			else
			{
				for (j = 0; separator[j] != '\0'; j++)
				{
					if (s[i - 1] == separator[j])
						s[i] -= 32;
				}
			}
		}
	}
	return (s);
}
