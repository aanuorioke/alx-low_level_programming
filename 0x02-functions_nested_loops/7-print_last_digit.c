#include "main.h"

/**
 * print_last_digit - function
 * Description: prints the last digit of a number
 * @n: number to be printed
 * Return: int
 */
int print_last_digit(int n)
{
	int last_digit = abs(n % 10);

	_putchar(last_digit + '0');
	return (last_digit);
}
