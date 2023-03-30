#include <ctype.h>
#include "main.h"

/**
 * cap_string - function
 * Description: capitalises all words of a string
 * @s: string whose words are to be capitalized
 * Return: string
 */
char *cap_string(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] == ' ' || s[i] == '.' || s[i] == ','
				|| s[i] == '\t' || s[i] == '\n'
				|| s[i] == ';' || s[i] == '!'
				|| s[i] == '?' || s[i] == '"'
				|| s[i] == '(' || s[i] == ')'
				|| s[i] == '{' || s[i] == '}')
		{
			i++;
			if (s[i] && isalpha(s[i]))
				s[i] -= 32;
		}
		i++;
	}
	return (s);
}
