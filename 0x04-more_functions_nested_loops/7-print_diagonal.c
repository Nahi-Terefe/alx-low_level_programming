#include "main.h"
/**
 * print_diagonal - prints out \ diagonally n times.
 *@n: accepts any int.
 * Return: void.
 */
void print_diagonal(int n)
{
	int i = 0;
	int j;

	if (n > 0)
	{
		while (i < n)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');

			i++;
		}
	}
	_putchar('\n');
}
