#include "main.h"

/**
 * swap - function
 * Description: swaps two integers
 * @a: first integer
 * @b: second integer
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = b;
	*b = temp;
	return (0);
}
