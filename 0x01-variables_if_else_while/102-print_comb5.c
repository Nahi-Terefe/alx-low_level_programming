#include <stdio.h>

/**
 * main -	entry to c program
 * Desc:	this program will print out all possible different
 *			combinations of three digits.
 * Return:	returns zero
 */
int main(void)
{
	int i, j, k, l;

	for (i = '0'; i <= '9'; i++)
	{

		for (j = '0'; j <= '9'; j++)
		{

			for (k = '0'; k <= '9'; k++)
			{
				for (l = '0'; l <= '9'; l++)
				{
					if ((i < k) || (i == k && j < l))
					{
						putchar(i);
						putchar(j);
						putchar(' ');
						putchar(k);
						putchar(l);

						if (!(i == '9' && j == '8'))
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
