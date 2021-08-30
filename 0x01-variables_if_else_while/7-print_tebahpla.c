#include <stdio.h>

/**
 * main -	entry to c program
 * Desc:	this program will print out small case alphabet in reverse
 * Return:	returns zero
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}

	putchar('\n');

	return (0);
}
