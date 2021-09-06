#include "main.h"

/**
 * swap_int - swaps the values of two integer.
 * @a: accepts address of the passed argument its a pointer.
 * @b: accepts address of the passed argument its a pointer.
 * Return: nothing.
 */
void swap_int(int *a, int *b)
{
	int i = a;

	*a = b;
	*b = i;
}
