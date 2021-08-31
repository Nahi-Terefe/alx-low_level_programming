#include "main.h"

/**
 * print_times_table - prints out times table of n.
 * @n: param n accepts int.
 */
void print_times_table(int n)
{
	int i, j, times;

	if (!(n > 15) && !(n < 0))
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				times = i * j;
				if (j == 0)
					_putchar(times + '0');
				else if (times <= 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(times + '0');
				}
				else if (times > 9 && times <= 99)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(times / 10 + '0');
					_putchar(times % 10 + '0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(times / 100 + '0');
					_putchar(times % 100 / 10 + '0');
					_putchar(times % 10 + '0');
				}
			}
			_putchar('\n');
		}
	}
}
