#include "main.h"

/**
 * puts_half - function
 * Description: prints the second half of a
 * @str: str to be printed
 * Return: Nothing
 */
void puts_half(char *str)
{
	size_t i;

	for (i = strlen(str) / 2; i < strlen(str); i++) 
		_putchar(str[i]);
	_putchar('\n');
}
