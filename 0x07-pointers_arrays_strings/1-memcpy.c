#include "main.h"

/**
 * _memcpy - function
 * Description: copies memory area
 * @src: memory area to be copied
 * @dest: destination
 * @n: number of bytes to be copied
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
