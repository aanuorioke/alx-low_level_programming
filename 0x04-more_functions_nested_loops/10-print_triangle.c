#include "main.h"

/**
 * print_triangle - function
 * Description: draws a triangle
 * @size: size of triangle
 * Return: Nothing
 */
void print_triangle(int size)
{
	int j;
	int k;
	int l;

	if (size > 0)
	{
		for (j = 1; j <= size; j++)
		{
			for (k = size - j; k > 0; k--)
				_putchar(' ');
			for (l = 0; l < j; l++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
