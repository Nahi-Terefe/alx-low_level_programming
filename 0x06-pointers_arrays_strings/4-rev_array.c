#include "main.h"

/**
 * reverse_array - reverse content of a given array.
 * @a: array pointer
 * @n: size of the array passed
 * Return: noting.
 */
void reverse_array(int *a, int n)
{
	int i, j;
	int tmp;

	for (i = 0, j = n - 1; i < n / 2; i++, j--)
	{
		tmp = *(a + i);
		*(a + i) = *(a + j);
		*(a + j) = tmp;
	}
}
