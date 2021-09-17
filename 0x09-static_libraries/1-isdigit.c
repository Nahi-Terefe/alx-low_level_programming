#include "main.h"

/**
 * _isdigit - checks if a given char is digit or not
 * @c: accepts value of a char.
 * Return: 1 if digit and 0 if not
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
