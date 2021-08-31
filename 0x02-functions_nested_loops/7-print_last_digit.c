#include "main.h"

/**
 * print_last_digit - compute and return the last digit of any int.
 * @n: peram accepts any int data type.
 * Return: returns the last digit of given int n.
 */
int print_last_digit(int n)
{
	n = n % 10;

	if (n < 0)
	{
		n = n * -1;
	}
	_putchar(n + '0');
	return (n);
}
