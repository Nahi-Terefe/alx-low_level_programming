#include "main.h"

/**
 * print_alphabet - prints out small letter alphabet.
 *
 * Return: Always 0 (sucsess).
 */
void print_alphabet(void)
{
	char letters;

	for (letters = 'a'; letters <= 'z'; letters++)
	{
		_putchar(letters);
	}
	_putchar('\n');
}
