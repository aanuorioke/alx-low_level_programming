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
	int i = 0;

	while (s[i])
	{
		if (isalpha(s[i]) && islower(s[i]))
			s[i] = toupper(s[i]);
		i++;
	}
	return (s);
}
