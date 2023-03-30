#include "main.h"

/**
 * reverse_array - function
 * Description: reverses an array of integers
 * @a: array to be reversed
 * @n: number of elements in array
 * Return: Nothing
 */
void reverse_array(int *a, int n)
{
	int i;
	int j = 0;
	int temp;

	for (i = n - 1; i >= n / 2; i--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		j++;
	}
}
