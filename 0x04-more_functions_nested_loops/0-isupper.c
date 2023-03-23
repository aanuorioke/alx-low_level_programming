#include "main.h"

/**
 * _isupper - function
 * Description: checks for uppercase character
 * @c: character to be checked
 * Return: 1 if lowercase and 0 otherwise
 */
int _isupper(int c)
{
	char letter;

	for (letter = 'A'; letter <= 'Z'; letter++)
	{
		if (letter == c)
			return (1);
	}
	return (0);
}
