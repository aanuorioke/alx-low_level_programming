#include "main.h"

/**
 * print_chessboard - function
 * Description: Prints a chessboard
 * @a: pointer to chessboard
 * Return: Nothing
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int j;
	int len = (int) sizeof(a);

	for (i = 0; i < len; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
