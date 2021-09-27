#include "dog.h"
#include <stdio.h>
#include <string.h>

/**
 * print_dog - prints out dog variables if exist.
 * @d: dog instance.
 */
void print_dog(struct dog *d)
{
	char *null_variable = "(nil)";

	if (d)
	{
		if (!d->name || strcmp(d->name, "") == 0)
			d->name = null_variable;
		if (!d->owner || strcmp(d->owner, "") == 0)
			d->owner = null_variable;

		printf("Name: %s\nAge: %f\nOwner: %s\n",
			   d->name,
			   d->age,
			   d->owner);
	}
}
