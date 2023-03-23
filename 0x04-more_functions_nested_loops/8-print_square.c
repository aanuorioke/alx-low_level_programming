#include "main.h"

/**
 * print_square - function
 * Description: draws a square
 * @size: size of square
 * Return: Nothing
 */
void print_square(int size)
{
	int j;
	int k;

	if (size > 0)
	{
		for (j = 0; j < size; j++)
		{
			for (k = 0; k < size; k++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
