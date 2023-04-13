#include "main.h"

/**
 * argstostr - concatenates arguments of a program
 * @ac: argument count
 * @av: array of arguments
 * Return: pointer to concatenated string
 */
char *argstostr(int ac, char **av)
{
	char *concatenated_str;
	int idx = 0;
	int i;
	int j;

	if (ac == 0)
		return (NULL);
	if (av[0] != NULL)
	{
		concatenated_str = malloc(strlen(av[0]) + 1);
		while (av[0][idx] != '\0')
		{
			concatenated_str[idx] = av[0][idx];
			idx++;
		}
		concatenated_str[idx] = '\n';
		idx++;
	}
	else
		return (NULL);

	for (i = 1; i < ac; i++)
	{
		if (av[i] != NULL)
		{
			concatenated_str = realloc(concatenated_str, strlen(concatenated_str) + strlen(av[i]) + 1);
			for (j = 0; av[i][j] != '\0'; j++)
			{
				concatenated_str[idx] = av[i][j];
				idx++;
			}
			concatenated_str[idx] = '\n';
			idx++;
		}
		else
			return (NULL);
	}
	concatenated_str[idx] = '\0';
	return (concatenated_str);
}
