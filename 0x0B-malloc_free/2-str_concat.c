#include "main.h"

/**
 * *str_concat -  concatenates two strings.
 * @s1: string pointer.
 * @s2: string pointer.
 * Return: a pointer or NULL.
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, s1_len, s2_len, str_len;
	char *con_cat;

	for (s1_len = 0; s1[s1_len] != '\0'; s1_len++)
	{
	}
	s1_len = s1_len + 1;

	for (s2_len = 0; s2[s2_len] != '\0'; s2_len++)
	{
	}
	s2_len = s2_len + 1;
	str_len = s1_len + s2_len;

	con_cat = (char *)malloc((str_len) * sizeof(char));

	if (con_cat == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		con_cat[i] = s1[i];
	}
	con_cat[i] = ' ';
	i++;

	for (j = 0; s2[j] != '\0'; j++)
	{
		con_cat[i] = s2[j];
		i++;
	}
	con_cat[i] = '\0';

	return (con_cat);
}
