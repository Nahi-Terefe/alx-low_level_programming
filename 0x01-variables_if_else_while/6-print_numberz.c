#include <stdio.h>

/**
 * intToAscii - function returns Ascii values of the given integer
 * num:	parameter passed to the function which is type int
 * Return:	ascii values of the given number
 */
char intToAscii(int num)
{
	return ('0' + num);
}

/**
 * main -	entry to c program
 * Desc:	this program will print single digits of base 10 number
 *			using only putchar() function.
 * Return:	returns zero
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar(intToAscii(num));
	}

	putchar('\n');

	return (0);
}
