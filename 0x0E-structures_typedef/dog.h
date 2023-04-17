#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure for a dog
 * Description: structure for a dog
 * @name: name of dog
 * @age: Dog's age
 * @owner: the owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif /* DOG_H */
