#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * *_strdup -  creates an array of chars,
 *					and initializes it with a specific char.
 * @str: string to be duplicated.
 * Return: a pointer or NULL.
 */
char *_strdup(char *str)
{
	int i, str_len;
	char *dup_str;

	if (str == 0)
	{
		return (NULL);
	}
	else
	{
		for (str_len = 0; str[str_len] != '\0'; str_len++)
		{
		}

		dup_str = (char *)malloc((str_len + 1) * sizeof(char));

		if (dup_str == NULL)
		{
			return (NULL);
		}
		for (i = 0; str[i] != '\0'; i++)
		{
			dup_str[i] = str[i];
		}
		dup_str[i] = '\0';

		return (dup_str);
	}
}
