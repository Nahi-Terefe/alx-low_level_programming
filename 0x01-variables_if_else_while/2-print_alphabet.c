#include <stdio.h>

/**
 * main -	entry to c program
 *
 * Desc:	this program will print out all small letter of english in the stdio
 *
 * Return:	returns zero
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}

	return (0);
}
