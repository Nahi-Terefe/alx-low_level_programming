#include "main.h"

/* _strcat - concatinate two strings.
 *
 * Return: pointer to the destination string.
 */
char *strncat(char *dest, char *src)
{
	int dest_len = strlen(dest);
	int i;
	int n;

	for (n = 0; src[n] != '\0'; n++)
	{
	}
	
	for (i = 0 ; i < n  && src[i] != '\0' ; i++)
		dest[dest_len + i] = src[i];
	
	dest[dest_len + i] = '\0';
	
	return dest;           
}

