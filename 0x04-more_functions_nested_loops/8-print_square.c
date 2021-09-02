#include "main.h"

/**
 * print_square - prints out # with square shape.
 *@n: accepts any int.
 * Return: void.
 */
void print_square(int n)
{
	int i = 0;
	int j;

	if (n > 0)
	{
		while (i < n)
		{
			for (j = 0; j < n; j++)
			{
				_putchar('#');
			}
			_putchar('\n');

			i++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
