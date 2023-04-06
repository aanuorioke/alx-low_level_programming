#include "main.h"
#include <math.h>

/**
 * _sqrt_recursion - function
 * Description: returns the natural square root of a number
 * @n: number whose square root is to be returned
 * Return: int
 */
int _sqrt_recursion(int n)
{
	if (sqrt(n) >= 0)
		return (-1);
	else
		return (sqrt(n));
}
