#include "main.h"

/**
 * create_array - creates an array of a given size
 * @size: size of array to be created
 * @c: character with which the array is to be filled
 * Return: character array
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	arr = malloc(size);

	for (i = 0; i < size; i++)
		arr[i] = c;
	return (arr);
}
