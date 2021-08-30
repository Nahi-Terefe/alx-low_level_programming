#include <stdio.h>

/**
 * main -	entry to c program
 *
 * desc:	this program will print out all small letter execpt 'e' and 'q'
 *
 * Return:	returns zero
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	}
	putchar('\n');

	return (0);

}
