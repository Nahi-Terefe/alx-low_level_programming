#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *new_dog - initialize the struct dog.
 * @name: name of dog
 * @age: age of dog.
 * @owner: owner of the dog.
 *
 * Return: new dog inistance.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_d;

	new_d = malloc(sizeof(dog_t));
	if (new_d == NULL)
		return (NULL);
	new_d->name = name;
	new_d->age = age;
	new_d->owner = owner;

	return (new_d);
}
