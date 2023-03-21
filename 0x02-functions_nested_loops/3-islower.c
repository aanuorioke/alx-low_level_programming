#include "main.h"

/**
 * _islower - function
 * Description: checks if char is lowercase
 * @c: character to be checked
 * Return: int
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
