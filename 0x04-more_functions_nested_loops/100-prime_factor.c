#include <stdio.h>

int main(void)
{
    long i, j;
    long num = 612852475143;
    long largest_prime = 1;

    for (i = 2; i <= num / 2; i++)
    {
        /* check if the number is divisible by i */
        if (num % i == 0)
        {

            /* check if the devisor is prime */
            for (j = 2; j <= (i / 2); j++)
            {

                if (i % j == 0)
                {
                    break;
                }
                else if (i > largest_prime)
                {
                    largest_prime = i;
                }
            }
        }
    }

    printf("%ld \n", largest_prime);

    return (0);
}
