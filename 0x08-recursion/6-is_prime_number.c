#include "main.h"

/**
 * is_prime - evaluates if n is prime.
 * @n: accepts an int.
 * @i: accepts an int.
 * Return: int.
 */
int is_prime(int n, int i)
{
	if (i <= (n - 1))
	{
		if (n % i == 0)
		{
			return (0);
		}
		return (is_prime(n, i + 1));
	}
	return (1);
}

/**
 * is_prime_number -  checks if n is prime number.
 * @n: accepts an int.
 * Return: int.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (is_prime(n, 2));
}
