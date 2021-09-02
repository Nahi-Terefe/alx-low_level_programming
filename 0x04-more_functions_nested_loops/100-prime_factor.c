#include <stdio.h>
#include <math.h>

int main(void)
{
    long i, j;
    long num = 612852475143;
    long largest_prime = 1;
    int isprime;

    for (i = 2; i <= num; i++)
    {
        /* check if the number is divisible by i */
        if (num % i == 0)
        {

            isprime = 1;

            /* check if the devisor is prime */
            for (j = 2; j <= i / 2; j++)
            {

                if (i % j == 0)
                {
                    isprime = 0;
                    break;
                }
            }
            if (isprime == 1)
            {
                printf("%li ", i);

                largest_prime = i;
            }
        }
    }

    printf("\nlargest prime: %ld \n", largest_prime);

    return (0);
}
