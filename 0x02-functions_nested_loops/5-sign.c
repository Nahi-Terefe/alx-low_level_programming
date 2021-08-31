#include "main.h"

/**
 * print_sign - detects the sign of a given number and 
 *				prints out the value.
 * @n: peram accepts any int data type.
 * Return: Always 0 (sucsess).
 */
int print_sign(int n)
{

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
