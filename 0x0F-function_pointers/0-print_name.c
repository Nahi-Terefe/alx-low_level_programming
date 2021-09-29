#include "function_pointers.h"

void print_name_as_is(char *name);
void print_name_uppercase(char *name);

/**
 * print_name - print name based on the desired function.
 *
 * @name: param to a string.
 * @f: function pointer.
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == print_name_as_is)
	{
		print_name_as_is(name);
	}
	else if (f == print_name_uppercase)
	{
		print_name_uppercase(name);
	}
}
