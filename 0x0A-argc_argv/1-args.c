#include <stdio.h>

/**
 * main -  prints the number of arguments passed into it.
 * @argc: number of argument passed to the main function.
 * @argv: an arrray that hold argument passed to the main function.
 * Return: 0 mean success.
 *
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
