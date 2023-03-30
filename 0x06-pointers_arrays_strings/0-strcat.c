#include "main.h"

/**
 * _strcat - function
 * Description: concatenates two strings 
 * @src: source string
 * @dest: string to be appended to src string
 * Return: string
 */
char *_strcat(char *dest, char *src)
{
	return (strncat(dest, src));
}
