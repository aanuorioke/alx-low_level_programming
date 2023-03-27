#include "main.h"

/**
 * print_rev - function
 * Description: prints a string in reverse
 * @s: string to be printed
 * Return: Nothing
 */
void print_rev(char *s)
{
	size_t i;

	for (i = strlen(s); i >= 0; i--)
		_putchar(s[i]);
}
