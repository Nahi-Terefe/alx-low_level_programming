#include "main.h"

/**
 * *_strchr - locate a char in a string.
 * @s: pointer
 * @c: char to be located.
 *
 * Return: a pointer.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (!accept[j])
			break;
	}
	return (i);
}
