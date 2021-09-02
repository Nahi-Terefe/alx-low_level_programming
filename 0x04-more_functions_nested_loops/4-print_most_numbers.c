#include "main.h"

/**
 * print_numbers - check and identify if a given char in upper case or not
 *
 * Return: void.
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
