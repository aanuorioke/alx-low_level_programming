#include "main.h"

/**
 * print_numbers - function
 * Description: prints 0 - 9
 * Return: Nothing
 */
void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
