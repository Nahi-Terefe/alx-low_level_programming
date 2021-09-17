#include <stdio.h>
#include <stdlib.h>

/**
 * main -   adds positive numbers.
 * @argc: number of argument passed to the main function.
 * @argv: an arrray that hold argument passed to the main function.
 * Return: 0 mean success 1 mean error.
 *
 */
int main(int argc, char *argv[])
{
	int sum = 0;

	if (argc == 2)
	{
		int n = atoi(argv[1]);

		if (n < 0)
		{
			printf("0\n");
			return (0);
		}
		if (n >= 25)
		{
			(n % 25 == 0) ? (sum += n / 25) : (sum += (n - (n % 25)) / 25, n = n % 25);
		}
		if (n >= 10 && n < 25)
		{
			(n % 10 == 0) ? (sum += n / 10) : (sum += (n - (n % 10)) / 10, n = n % 10);
		}
		if (n >= 5 && n < 10)
		{
			(n % 5 == 0) ? (sum += n / 5) : (sum += (n - (n % 5)) / 5, n = n % 5);
		}
		if (n >= 2 && n < 5)
		{
			(n % 2 == 0) ? (sum += n / 2) : (sum += (n - (n % 2)) / 2, n = n % 2);
		}
		if (n == 1)
			sum += 1;
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", sum);
	return (0);
}
