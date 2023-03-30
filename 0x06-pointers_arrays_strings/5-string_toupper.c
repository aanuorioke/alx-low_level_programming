#include <ctype.h>
#include "main.h"

/**
 * string_toupper - function
 * Description: converts a string to uppercase
 * @s: string to be converted
 * Return: string
 */
char *string_toupper(char *s)
{
	int i;
	int len = (int) sizeof(s) / sizeof(char);

	for (i = 0; i < len; i++)
		s[i] = toupper(s[i]);
	return (s); 
}
