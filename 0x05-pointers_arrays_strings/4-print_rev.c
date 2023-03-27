#include "main.h"

/**
 * print_rev - function
 * Description: prints a string in reverse
 * @s: string to be printed
 * Return: Nothing
 */
void print_rev(char *s)
{
	int i;
	int len = (int) strlen(s);

	for (i = len; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
