#include "main.h"

/**
 * _recursion_sqrt-  evaluate the squreroot of n.
 * @n: accepts an int.
 * @i: accepts an int.
 * Return: int.
 */
int _recursion_sqrt(int n, int i)
{
	int j = 0;

	if (i * i > n)
	{
		return (-1);
	}
	else if (i * i == n)
	{
		return (i);
	}
	j = _recursion_sqrt(n, i + 1);

	return (j);
}

/**
 * _sqrt_recursion -  returns the square root of n if exits.
 * @n: accepts an int.
 * Return: int.
 */
int _sqrt_recursion(int n)
{
	int i = 0;

	i = _recursion_sqrt(n, 0);
	return (i);
}
