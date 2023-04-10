#include "main.h"

/**
 * main - prints number of arguments passed to program
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
