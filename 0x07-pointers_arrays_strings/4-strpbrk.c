#include "main.h"

/**
 * _strpbrk - function
 * Description: Searches a string for any of a set of the bytes
 * in another string
 * @s: string to be searched
 * @accept: string to search for
 * Return: pointer to char
 */
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
