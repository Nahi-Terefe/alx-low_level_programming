#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of jgers,
 * followed by a new line.
 *@a: pointer parameter
 *@n: int parameter
 * Return: Always 0 (Success)
 */
void print_array(int *a, int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{

		j = *(a + i);

		printf("%d", j);

		if (i != n - 1)
			printf(", ");
	}

	printf("\n");
}
