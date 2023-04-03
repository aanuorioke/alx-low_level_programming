#include "main.h"

/**
 * _strspn - function
 * Description: Gets length of prefix of a substring in a string
 * @s: string
 * @accept: substring
 * Return: pointer to first occurrence of c
 */
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
