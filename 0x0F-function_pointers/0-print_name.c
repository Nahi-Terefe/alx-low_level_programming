#include "function_pointers.h"

/**
 * print_name - print name based on the desired function.
 *
 * @name: param to a string.
 * @f: function pointer.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == 0)
	{
		return;
	}
	if (f == 0)
	{
		return;
	}
	f(name);
}
