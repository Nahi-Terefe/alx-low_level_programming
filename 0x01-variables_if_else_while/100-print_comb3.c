#include <stdio.h>

/**
 * main -	entry to c program
 * Desc:	this program will print out all possible different 
 *			combinations of two digits.
 * Return:	returns zero
 */
int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		int j;

		for (j = num + 1; j <= '9'; j++)
		{
			putchar(num);
			putchar(j);

			if (num != '8' || j != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
