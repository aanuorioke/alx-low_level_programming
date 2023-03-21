#include "main.h"

/**
 * print_sign - function
 * Description: checks the sign of a number
 * @n: number to be checked
 * Return: int
 */
int print_sign(int n)
{
	int result;
	if (n == 0)
	{
		_putchar('0');
		result = 0;
	}
	else if (n > 0)
	{
		_putchar('+');
		result = 1;
	}
	else
	{
		_putchar('-');
		result = -1;
	}
	return (result);
}
