#include <stdio.h>

/**
 * main -	entry to c program
 * Desc:	this program will print single digits of base 10 number
 *		separeted by ',' and ' ' space
 * Return:	returns zero
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);

		if (i < '9')
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
