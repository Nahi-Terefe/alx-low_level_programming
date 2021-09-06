#include "main.h"
/**
 * print_rev - prints a string to stdout in reverse.
 * @str: pointer which accepts address of a string value.
 * Return: nothing.
 */
void print_rev(char *s)
{
	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		i++;
	}

	for (j = i - 1; j >= 0; i--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
