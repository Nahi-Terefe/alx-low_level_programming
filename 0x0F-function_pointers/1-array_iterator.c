#include "function_pointers.h"

/**
 * array_iterator - a function that executes a
 *	function given as a parameter on each element of an array.
 *
 * @array: param to an array.
 * @size: size of an array.
 * @action: ptr to a function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (size == 0)
	{
		return;
	}
	if (action == 0)
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
