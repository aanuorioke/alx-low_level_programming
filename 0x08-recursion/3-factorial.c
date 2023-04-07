#include "main.h"

/**
 * factorial - function
 * Description: prints the factorial of a number
 * @n: number whose factorial is to be printed
 * Return: int
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
