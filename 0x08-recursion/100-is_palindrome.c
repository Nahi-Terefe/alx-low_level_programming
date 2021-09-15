#include "main.h"

/**
 * reverse_string- Entry point
 * @s: int value
 * Return: return.
 */
int reverse_string(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + reverse_string(s + 1));
}

/**
 * my_palindrome - Entry point
 * @s: int value
 * @l: int value
 * Return: check.
 */
int my_palindrome(char *s, int l)
{
	if (l <= 1)
	{
		return (1);
	}
	if (*s != s[l - 1])
	{
		return (0);
	}
	else
	{
		return (my_palindrome(s + 1, l - 2));
	}
}

/**
 * is_palindrome - Entry point
 * @s: int value
 * Return: Return .
 */
int is_palindrome(char *s)
{
	int a;

	a = reverse_string(s);
	if (a <= 1)
	{
		return (1);
	}
	return (my_palindrome(s, a));
}
