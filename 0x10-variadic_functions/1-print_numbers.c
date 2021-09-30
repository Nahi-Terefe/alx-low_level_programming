#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers,
 *					followed by a new line.
 * @n: number of argument.
 * @separator: separator char.
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n - 1; i++)
	{
		printf("%d", va_arg(args, int));
		if (separator != 0 && i < n - 1)
		{
			printf("%s ", separator);
		}
	}

	printf("%d", va_arg(args, int));

	va_end(args);

	printf("\n");
}
