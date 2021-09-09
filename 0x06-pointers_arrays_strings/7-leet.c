#include "main.h"

/**
 * leet - replace some char with a particular digit char.
 * @s: string pointer
 * Return: a string.
 */
char *leet(char *s)
{
	int i, j;
	char c[] = "aAeEoOtTlL";
	char sub[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; c[j] != '\0'; j++)
		{
			if (s[i] == c[j])
			{
				s[i] = sub[j];
			}
		}
	}

	return (s);
}
