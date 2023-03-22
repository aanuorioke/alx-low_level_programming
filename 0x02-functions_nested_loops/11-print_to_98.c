#include "main.h"

/**
 * print_to_98 - function
 * Description: prints numbers from n - 98
 * @n: number to start printing from
 *
 * Return: Nothing
 */
void print_to_98(int n)
{
	char i;

	if (n <= 98)
	{

		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
				printf(", ");
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i != 98)
				printf(", ");
		}

	}
	printf("\n");
}
