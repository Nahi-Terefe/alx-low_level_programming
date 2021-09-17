#include <stdio.h>
#include <stdlib.h>

/**
 * main -   adds positive numbers.
 * @argc: number of argument passed to the main function.
 * @argv: an arrray that hold argument passed to the main function.
 * Return: 0 mean success.
 *
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc >= 2)
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]))
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}

		printf("%d\n", sum);
		return (0);
	}
	else
	{
		printf("0\n");
		return (0);
	}
}
