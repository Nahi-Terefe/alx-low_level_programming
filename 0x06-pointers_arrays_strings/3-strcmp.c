#include "main.h"

/**
 * _strcmp - compare two strings.
 * @s1: accepts destination string.
 * @s2: accepts source string.
 * Return: pointer to the destination string.
 */
int _strcmp(char *s1, char *s2);
{
	int i;
	int flag = 0;

	while (s1 != '\0' && s2 != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
			flag = 1;
			break;
		}
	}
	if (flag == 0)
	{
		return (0);
	}
}
