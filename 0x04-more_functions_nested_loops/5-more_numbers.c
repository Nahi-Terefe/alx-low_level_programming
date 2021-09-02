#include "main.h"

/**
 * more_numbers- prints out digits from 0-14 10 times
 *
 * Return: void.
 */
void more_numbers(void)
{
	int j, k;

	for (j = 0; j <= 9; j++)
	{
		int i = 0;

		while (i <= 14)
		{

			if (i <= 9)
			{
				k = i;
			}
			else
			{
				k = i % 10;
				_putchar(i / 10 + '0');
			}
			_putchar(k + '0');

			i++;
		}

		_putchar('\n');
	}
}
