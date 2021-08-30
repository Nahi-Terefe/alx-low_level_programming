#include <stdio.h>

/**
 * main -	entry to c program
 * Desc:	this program will print out all the numbers found in base 16
 * Return:	returns zero
 */
int main(void)
{
	int num;
	char letter;

	for (num = '0'; num <= '9'; num++)
		putchar(num);

	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}

