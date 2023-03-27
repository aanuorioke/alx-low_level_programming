#include "main.h"

/**
 * print_array - function
 * Description: prints first n elements of an array
 * @a: array whose elements are to be printed
 * @n: number of elements to be printed
 * Return: Nothing
 */
void print_array(int *a, int n)
{
	if (n > 0)
	{
		int i;

		for (i = 0; i < n - 1 ; i++)
			printf("%d, ", a[i]);
		printf("%d\n", a[i]);
	}
	else
		printf("\n");
}
