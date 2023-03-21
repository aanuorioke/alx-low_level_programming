#include "main.h"

/**
 * times_table - function
 * Description: prints the times table
 * Return: Nothing
 */
void times_table(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			printf("%d", (i * j));
			if ((j != 9))
			{
				printf(",");
				printf(" ");
			}
		}
		_putchar('\n');
	}
}
