#include "main.h"

/**
 * print_to_98 - function
 * Description: prints numbers from n - 98
 * @n: number to start printing from
 *
 * Return: Nothing
 */
void print_to_98(int n)
{
	char i;

	for (i = n; i <= 97; i++)
	{
		if (i < 0)
		{
			_putchar('-');
		}
		if (abs(n) < 10)
		{
			_putchar(i + '0');
		}
		if (abs(n) >= 10)
		{
			_putchar(abs(i / 10) + '0');
			_putchar(abs(i % 10) + '0');
		}
		_putchar(',');
		_putchar(' ');
	}
	_putchar((n / 10) + '0');
	_putchar((n % 10) + '0');
	_putchar('\n');
}
