#include <stdio.h>

/**
 * main -	entry to c program
 *
 * Desc:	this program will print all letter
 *			of english lang bothe upper and lower case
 *
 * Return:	returns zero
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
