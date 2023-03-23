#include "main.h"

/**
 * _isdigit - function
 * Description: checks if char is a digit
 * @c: character to be checked
 * Return: int
 */
int _isdigit(int c)
{
	if (isdigit(c) == 0)
		return (0);
	else
		return (1);
}
