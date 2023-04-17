#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates a new dog
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the dog's owner
 * Return: dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *name_cpy;
	char *owner_cpy;

	if (name == NULL || owner == NULL)
		return (NULL);
	new_dog = malloc(sizeof(dog_t));
	name_cpy = malloc(sizeof(name));
	owner_cpy = malloc(sizeof(owner));
	strcpy(name_cpy, name);
	strcpy(owner_cpy, owner);
	new_dog->name = name_cpy;
	new_dog->age = age;
	new_dog->owner = owner_cpy;
	return (new_dog);
}
