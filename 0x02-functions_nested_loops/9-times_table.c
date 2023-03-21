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
				_putchar(mult + '0');
			else
			{
				if (mult < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(mult + '0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar((mult / 10) + '0');
					_putchar((mult % 10) + '0');
				}
			}
		}
		_putchar('\n');
	}
}
