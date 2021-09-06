#include "main.h"
/**
 * print_rev - prints a string to stdout in reverse.
 * @str: pointer which accepts address of a string value.
 * Return: nothing.
 */
void print_rev(char *s)
{
	int i = 0;

	int len_str = _strlen(&s);

	for (i = len_str - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
