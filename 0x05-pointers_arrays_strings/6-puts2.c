#include "main.h"

/**
 * puts2 - function
 * Description: prints every other character of a string \
 * starting from the first character
 * @str: str to be printed
 * Return: Nothing
 */
void puts2(char *str)
{
	size_t i;

	for (i = 0; i < strlen(str); i+=2)
		_putchar(str[i]);
	_putchar('\n');
}
