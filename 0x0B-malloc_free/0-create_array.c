#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * *create_array -  creates an array of chars,
 *					and initializes it with a specific char.
 * @size: size of the array.
 * @c: char to initialize the array with.
 *
 * Return: a pointer or NULL.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		char *array = (char *)malloc(size * sizeof(char));

		for (i = 0; i < size; i++)
		{
			array[i] = c;
		}

		return (array);
	}
}
