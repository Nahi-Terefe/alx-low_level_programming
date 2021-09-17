#include <stdio.h>
#include <stdlib.h>

/**
 * main -  multiplies two numbers.
 * @argc: number of argument passed to the main function.
 * @argv: an arrray that hold argument passed to the main function.
 * Return: 0 mean success.
 *
 */
int main(int argc, char *argv[])
{

	if (argc >= 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (0);
	}
}
