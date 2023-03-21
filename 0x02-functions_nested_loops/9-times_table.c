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
	int mult;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			mult = i * j;
			if (j == 0)
				printf("%d", mult);
			else
			{
				if (mult < 10)
				{
					printf(",  %d", mult);
				}
				else
					printf(", %d", mult);
			}
		}
		_putchar('\n');
	}
}
