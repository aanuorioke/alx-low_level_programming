#include "main.h"

/**
 * print_diagsums - function
 * Description: Prints sum of diagonals of a square matrix
 * @a: square matrix
 * @size: length of square matrix
 * Return: Nothing
 */
void print_diagsums(int *a, int size)
{
	int j;
	int k;
	int sumLeftDiag = 0;
	int sumRightDiag = 0;
	int leftIncrement = size + 1;
	int rightIncrement = size - 1;

	for (j = 0; j < size * size ; j = j + leftIncrement)
	{
		sumLeftDiag += a[j];
	}
	printf("%d, ", sumLeftDiag);
	for (k = size - 1; k <= size * size - size; k = k + rightIncrement)
	{
		sumRightDiag += a[k];
	}
	printf("%d\n", sumRightDiag);
}
