#include "main.h"

/**
 * main -  adds numbers passed as arguments to the program
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;
	int j;
	int len;
	int sum = 0;

	if (argc == 1)
		printf("0\n");
	else
	{
		for (i = 1; i < argc; i++)
		{
			len = (int) sizeof(*argv[i]) / sizeof(char);

			if (atoi(argv[i]) < 0)
			{
			}
			else
			{
				for (j = 0; j < len; j++)
				{
					if (argv[i][j] == 0)
					{
					}
					else if (isalpha(argv[i][j]) || ispunct(argv[i][j]))
					{
						printf("Error\n");
						return (1);
					}
				}
				sum += atoi(argv[i]);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
