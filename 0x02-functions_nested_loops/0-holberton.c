#include "_putchar.c"
#include "holberton.h"

/**
 * main - entry to c program
 *
 * Return: zero
 */
int main(void)
{
	char school_name[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(school_name[i]);
	}
	_putchar('\n');
	return (0);
}
