#include <ctype.h>
#include "main.h"

/**
 * leet - function
 * Description: encodes a string into 1337
 * @s: string to be encoded
 * Return: string
 */
char *leet(char *s)
{
	int i = 0;
	int j;
	char *a = "aeotlaeotl";
	char codes[10] = {'4', '3', '0', '7', '1', '4', '3', '0', '7', '1'}; 

	while (s[i])
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == a[j])
			{
				s[i] = codes[j];
			}
		}
		i++;
	}
	return (s);
}
