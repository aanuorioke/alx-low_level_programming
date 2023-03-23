#include "main.h"

/**
 * print_numbers - function
 * Description: prints 0 - 14 ten times
 * Return: Nothing
 */
void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j=0; j<=14; j++)
			printf("%d", j);
		_putchar('\n');
	}
}
