#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: number to manipulate.
 * @index: integer
 *
 * Return: 1 or 0 or -1(fail)
 */
int get_bit(unsigned long int n, unsigned int index)
{

	if (n & (1 << index))
	{
		return (1);
	}
	else if (!(n & (1 << index)))
	{
		return (0);
	}
	else
	{
				return (-1);
	}

}
