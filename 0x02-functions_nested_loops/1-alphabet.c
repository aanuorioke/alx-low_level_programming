#include "main.h"

/**
 * _islower - function
 * Description: checks for lowercase character
 * Return: 1 if lowercase and 0 otherwise
 */
int _islower(int c)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter == c)
			return (1);
	}
	return (0);
}
