#include "main.h"
#include <stdio.h>

/**
 * main -  prints its name, followed by a new line.
 * @argc: number of argument passed to the main function.
 * @argv: an arrray that hold argument passed to the main function.
 * Return: 0 mean success.
 *
 */
int main(__attribute__((unused)) int argc, char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}

