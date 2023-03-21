#include "main.h"

/**
 * _isalpha - function
 * Description: checks if char is an alphabet
 * @c: character to be checked
 * Return: int
 */
int _isalpha(int c)
{
	if (isalpha(c) == 0)
		return (0);
	else
		return (1);
}
