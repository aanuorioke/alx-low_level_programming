#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializies variable of of type struct dog
 * @d: dog
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the dog's owner
 * Return: Nothing.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
