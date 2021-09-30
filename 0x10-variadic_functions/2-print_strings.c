#include "variadic_functions.h"

/**
 * print_strings - function that prints strings,
 *				followed by a new line.
 * @n: number of argument.
 * @separator: separator char.
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *nil = "nil";
	char *arg_strings = "";

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		arg_strings = va_arg(args, char *);

		printf("%s", arg_strings == NULL ? nil : arg_strings);

		if (separator != 0 && i < n - 1)
		{
			printf("%s", separator);
		}
	}

	va_end(args);

	printf("\n");
}
