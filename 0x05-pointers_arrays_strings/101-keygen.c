#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -  generates random valid passwords for the program 101-crackme.
 *
 * Return: Always 0.
 */
int main(void)
{
	char seed[53] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char password[22];
	int i, n, pass, c;

	srand(time(0));

	for (i = 0; pass < 2772; i++)
	{
		n = rand() % 10;
		password[i] = seed[n];
		pass += password[i];
	}

	c = 2772 - pass;
	password[i] = c;
	printf("%s\n", password);

	return (0);
}
