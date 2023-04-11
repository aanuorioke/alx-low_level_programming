#include "main.h"

/**
 * main - prints all arguments it receives
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{

	if  (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int amount = atoi(argv[1]);
		int count = 0;

		if (amount < 0)
		{
			printf("0\n");
			return (0);
		}
		if (amount >= 25)
		{
			count += amount / 25;
			amount = amount % 25;
		}
		if (amount >= 10 && amount < 25)
		{
			count += floor(amount / 10);
			amount = amount % 10;
		}
		if (amount >= 5 && amount < 10)
		{
			count += amount / 5;
			amount = amount % 5;
		}
		if (amount >= 2 && amount < 5)
		{
			count += amount / 2;
			amount = amount % 2;
		}
		count += amount;
		printf("%d\n", count);
	}
	return (0);
}
