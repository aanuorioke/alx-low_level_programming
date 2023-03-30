#include "main.h"

/**
 * _strncat - function
 * Description: concatenates two strings
 * @src: source string
 * @dest: string to be appended to src string
 * @n: number of bytes to copy
 * Return: string
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
