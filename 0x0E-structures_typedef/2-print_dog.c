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
		printf("Name: %s\n", d->name);
	else
		printf("Name: (nil)\n");
	printf("Age: %0.6f\n", d->age);
	if (d->owner != NULL)
		printf("Owner: %s\n", d->owner);
	else
		printf("Owner: (nil)\n");
}
