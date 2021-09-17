#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * infinite_add(char *n1, char *n2, char *result, int size_r)
 *  @n1: 
 *  @n2:
 *  @result:
 *  @size_r: 
 * Return: result string.
 */
char infinite_add(char *n1, char *n2, char *result, int size_r)
{
    int i, j, n, sum;
    int first_digit = 0;
    int len_n1 = strlen(n1);
    int len_n2 = strlen(n2);

    if (len_n1 > len_n2)
    {
        j = len_n2 - 1;
        int n2_i = j >= 0 ? atoi(n2_i[j]) : 0;

        for (i = len_n1; i >= 0; --i)
        {
            sum = atoi(n1[i]) + n2_i + first_digit;
            if (sum > 10)
            {
                result = strncat(result, sum % 10 + '0', 1);
                first_digit = sum / 10;
            }
            else
            {
                result = strcat(result, sum / 10 + '0', 1);
                first_digit = 0;
            }

            j--;
        }
    }
    else
    {
        j = len_n1 - 1;
        int n1_i = j >= 0 ? atoi(n1_i[j]) : 0;

        for (i = len_n2; i >= 0; --i)
        {
            sum = atoi(n1[i]) + n1_i + first_digit;
            if (sum > 10)
            {
                result = strncat(result, sum % 10 + '0', 1);
                first_digit = sum / 10;
            }
            else
            {
                result = strcat(result, sum / 10 + '0', 1);
                first_digit = 0;
            }

            j--;
        }
    }

    result = strrev(result);

    if (strlen(result) > size_r)
    {
        return (0);
    }
    else
    {
        return (result);
    }
}
