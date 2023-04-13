#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *concatenated_str;
	int idx = 0;
	int i;
	int j;
	int len_s1 = (int) strlen(s1);
	int len_s2 = (int) strlen(s2);

	concatenated_str = malloc(len_s1 + len_s2 + 1);
	if (s1 != NULL)
	{
		for (i = 0; i < len_s1; i++)
		{
			concatenated_str[idx] = s1[i];
			idx++;
		}
	}
	else
		return (NULL);
	if (s2 != NULL)
	{
		for (j = 0; j <= len_s2; j++)
		{
			concatenated_str[idx] = s2[j];
			idx++;
		}
	}
	else
		return (NULL);
	concatenated_str[idx] = '\0';
	return (concatenated_str);
}
