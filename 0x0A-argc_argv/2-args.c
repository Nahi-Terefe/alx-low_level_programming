#include <stdio.h>

/**
 * main -  prints all arguments it receives.
 * @argc: number of argument passed to the main function.
 * @argv: an arrray that hold argument passed to the main function.
 * Return: 0 mean success.
 *
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
