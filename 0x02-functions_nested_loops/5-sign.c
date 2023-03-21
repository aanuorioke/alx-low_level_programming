#include "main.h"

/**
 * print_sign - function
 * Description: checks the sign of a number
 * @n: number to be checked
 * Return: int
 */
int print_sign(int n)
{
	if (n == 0)
	{
		printf("0");
		return (0);
	}
	else if (n > 0)
	{
		printf("+");
		return (1);
        }
	else
	{
		printf("-");
		return (-1);
	}
}
