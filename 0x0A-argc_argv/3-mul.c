#include "main.h"

/**
 * main - multiplies 2 numbers passed as arguments to the program
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	if (argc >= 3)
	{
		int mul = atoi(argv[1]) * atoi(argv[2]);

		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
