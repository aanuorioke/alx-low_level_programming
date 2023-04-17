#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - prints a struct dog
 * @d: the dog to be printed
 * Return: Nothing.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name != NULL)
		printf("my_dog.name = %s\n", d->name);
	else
		printf("my_dog.name = nil\n");
	printf("my_dog.age = %f\n", d->age);
	if (d->owner != NULL)
		printf("my_dog.owner = %s\n", d->owner);
	else
		printf("my_dog.age = nil\n");
}
