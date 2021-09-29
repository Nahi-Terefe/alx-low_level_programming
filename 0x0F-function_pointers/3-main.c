#include "3-calc.h"

/**
  * main - main.
  * @argc: argument count.
  * @argv: argument values.
  * Return: 0.
  */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*op_on_nums)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]),
	num2 = atoi(argv[3]);

	op_on_nums = get_op_func(argv[2]);
	if (op_on_nums == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	result = op_on_nums(num1, num2);
	printf("%d\n", result);

	return (0);
}
