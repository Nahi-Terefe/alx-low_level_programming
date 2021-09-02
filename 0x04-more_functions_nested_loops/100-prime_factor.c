#include <stdio.h>

/**
 * main - entry.
 *
 * Return: zero.
 *
 */
int main(void)
{
	long int n = 612852475143;
	long int i = 2, largest_prime;

	while (n != 0)
	{
		if (n % i != 0)
			i = i + 1;
		else
		{
			largest_prime = n;
			n = n / i;
			if (n == 1)
			{
				printf("%ld\n", largest_prime);
				break;
			}
		}
	}
	return (0);
}
