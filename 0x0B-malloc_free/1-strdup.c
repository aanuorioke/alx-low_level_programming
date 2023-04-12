#include "main.h"

/**
 * _strdup - returns pointer to newly allocated space containing
 * input string
 * @str: input string
 * Return: pointer to duplicated string
 */
char *_strdup(char *str)
{
	char *duplicated_str;

	duplicated_str = strdup(str);
	return (duplicated_str);
}
