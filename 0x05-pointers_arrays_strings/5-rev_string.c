#include "main.h"
/**
 * rev_string - reverse a give string.
 * @s: pointer which accepts address of a string value.
 * Return: nothing.
 */
void rev_string(char *s)
{
	int i = 0;
	int j;
	char k;

	while (s[i] != '\0')
	{
		i++;
	}

	i--;

	for (j = 0; j < i; j++, j--)
	{
		k = *(s + i);
		*(s + i) = *(s + j);
		*(s + j) = k;
	}
}
