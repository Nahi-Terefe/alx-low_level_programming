#include "main.h"

/**
 * binary_to_uint - converts a binary to unsigned int.
 *
 * @b: pointer to a string.
 *
 * Return: int or 0(fail)
 */
void print_binary(unsigned long int n)
{
	unsigned long int i;

	/**
	 * assumption: the system is 32 bit and a int value will 
	 * take 32 bit space in the memory.
	 *
	 * i is initialized with one bit shifted 
	 * to the left 31 times, and then it shifted 
	 * one bit to the right util becomes less that
	 * zero. and in each i teration the bit compared wit
	 * n bitwisly using the & operator. 
	 *
	 * so to do the bit wise operation the system automaticaly 
	 * converts n in to binary and compare the 
	 * corosponding i bit with n bit in each iteration.
	 */   
	for (i = (1 << 31); i > 0; (i >> 1))
	{
		if (n & i)
		{
			printf("1");
		}
		else
		{
			printf("0");
		}
	}
}
