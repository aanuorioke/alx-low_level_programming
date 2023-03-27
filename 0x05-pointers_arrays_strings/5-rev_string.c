#include "main.h"

/**
 * rev_string - function
 * Description: reverses a string
 * @s: string to be reversed
 * Return: Nothing
 */
void rev_string(char *s)
{
	int i;
	int j = 0;
	int len;
	char c;
	
	len = (int) strlen(s);
	for (i = len - 1; i >= len / 2; i--)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
		j++;
	}
}
