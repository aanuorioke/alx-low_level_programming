#include "main.h"

/**
 * print_numbers - function
 * Description: prints 0 - 9 except 2 and 4
 * Return: Nothing
 */
void print_most_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		if (!(c == '2' || c == '4'))
			_putchar(c);
	}
	_putchar('\n');
}
