#include "variadic_functions.h"

/**
 * print_all - function that prints anything.
 * @format: number of argument.
 *
 */
void print_all(const char *const format, ...)
{
	char *nil = "";
	va_list args;
	unsigned int i, j;

	i = 0;
	while (format != NULL)
	{
		va_start(args, format);
		while (format[i] != 0)
		{
			j = 1;
			switch (format[i])
			{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				nil = va_arg(args, char *);
				if (nil == 0)
					nil = "(nil)";
				printf("%s", nil);
				break;
			default:
				j = 0;
				break;
			}
			if (format[i + 1] && j)
				printf(", ");
			i++;
		}
		va_end(args);
		break;
	}
	printf("\n");
}
