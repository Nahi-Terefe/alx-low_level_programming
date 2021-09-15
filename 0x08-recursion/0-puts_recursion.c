#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line recursivly.
 *@s: pointer to char.
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	_putchar(*s);

	if (*s != '\0')
	{
		_puts_recursion(s + 1);
	}
	else
	{
		return;
	}
}
