#include "main.h"

/**
 * _memset - function
 * Description: uses memset to fill memory area pointed by s
 * with constant byte b
 * @s: memory area
 * @b: constant byte used for printing
 * @n: number of bytes to be printed
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
