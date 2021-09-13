#include "main.h"

/**
 * *_strchr - locate a char in a string.
 * @s: pointer
 * @c: char to be located.
 *
 * Return: a pointer.
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *s != '\0'; i++, *s++)
	{
		if (*s == c)
		{
			return (s);
		}
	}

	return (0);
}
