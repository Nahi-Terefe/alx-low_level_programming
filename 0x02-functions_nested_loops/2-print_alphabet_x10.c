#include "main.h"

/**
 * print_alphabet_x10 - prints out small letter alphabet 10 times.
 *
 * Return: Always 0 (sucsess).
 */
void print_alphabet_x10(void)
{
	char letters;
	int i;

	for (i = 0; i <= 9; i++)
	{
		for (letters = 'a'; letters <= 'z'; letters++)
		{
			_putchar(letters);
		}

		_putchar('\n');
	}
}
