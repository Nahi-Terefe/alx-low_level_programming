#include <stdio.h>

/**
 * main - natural numbers multiples of 3 or 5 to 1024
 *
 * Return: always 0
 */

int main(void)
{
	int sum, three, five, three_multiplayer, five_multiplayer;

	sum = 0;
	for (three = 0; three <= (1024 / 3); three++)
	{
		three_multiplayer = 3 * three;
		sum = sum + three_multiplayer;
	}
	for (five = 0; five <= (1024 / 5); five++)
	{
		if (!(five % 3 == 0))
		{
			five_multiplayer = 5 * five;
			sum = sum + five_multiplayer;
		}
	}
	printf("%i\n", sum);
	return (0);
}
