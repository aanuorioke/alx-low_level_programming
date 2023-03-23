#include "main.h"

/**
 * print_line - function
 * Description: drawsa line with underscores
 * @n: the number of times to print underscore
 * Return: Nothing
 */
void print_line(int n)
{
	int j;

	if (n > 0)
	{
		for (j = 1; j <= n; j++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
