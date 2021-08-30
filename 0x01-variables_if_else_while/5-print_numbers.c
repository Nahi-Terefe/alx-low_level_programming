#include <stdio.h>

/**
 * main -	entry to c program
 *
 * Desc:	this program will print single digits of base 10 number
 *
 * Return:	returns zero
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		printf("%d", num);

	printf("\n");

	return (0);
}
