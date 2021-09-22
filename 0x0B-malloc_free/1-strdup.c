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
	int i;
	int str_size = strlen(str);

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		char *dup_str = (char *)malloc(str_size * sizeof(char));

		if (dup_str == NULL)
		{
			return (NULL);
		}

		for (i = 0; i < str_size; i++)
		{
			dup_str[i] = str[i];
		}
		dup_str[str_size] = '\0';

		return (dup_str);
	}
}
