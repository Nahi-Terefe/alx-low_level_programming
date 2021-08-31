#include "main.h"

/**
 * main - call and excute the print_alphabet function.
 *
 * Return: Always 0 (sucsess).
 */
int main(void)
{
	char letters;

	for (letters = 'a'; letters <= 'z'; letters++)
	{
		_putchar(letters);
	}
	_putchar('\n');
	return (0);
}
