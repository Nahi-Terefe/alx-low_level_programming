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

	/* intToAscii - function returns Ascii values of the given integer */
	char intToAscii(int num)
	{
		return ('0' + num);
	}
	for (num = 0; num < 10; num++)
	{
		putchar(intToAscii(num));
	}

	putchar('\n');

	return (0);
}
