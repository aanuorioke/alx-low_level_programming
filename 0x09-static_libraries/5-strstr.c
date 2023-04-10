#include "main.h"

/**
 * _strstr - function
 * Description: Searches a string for another string
 * @haystack: string to be searched
 * @needle: string to search for
 * Return: pointer to start of located string
 */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
