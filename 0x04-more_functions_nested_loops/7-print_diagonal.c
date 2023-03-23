#include "main.h"

/**
 * print_diagonal - function
 * Description: draws a diagonal line using slash
 * @n: the number of times to print underscore
 * Return: Nothing
 */
void print_diagonal(int n)
{
	int j;
	int k;

	if (n > 0)
	{
		for (j = 0; j < n; j++)
		{
			for (k = 0; k < j; k++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	_putchar('\n');
}
