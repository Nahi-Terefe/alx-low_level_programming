#include <stdio.h>

/**
 * main -	entry to c program
 * Desc:	this program will print single digits of base 10 number
 *			using only putchar() function.
 * Return:	returns zero
 */
int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}

	putchar('\n');

	return (0);
}
