#include "main.h"
int find_sqrt(int base, int n);

/**
 * _sqrt_recursion - function
 * Description: returns the natural square root of a number
 * @n: number whose square root is to be returned
 * Return: int
 */
int _sqrt_recursion(int n)
{
	int base = 1;

	return (find_sqrt(base, n));
}

/**
 * find_sqrt - function
 * Description: returns the natural square root of a number
 * @n: number whose square root is to be returned
 * @base: number to be checked if its value is the desired sqrt
 * Return: int
 */
int find_sqrt(int base, int n)
{
	if (n < 0)
		return (-1);
	if (base >= n)
		return (-1);
	else if (base * base == n)
		return (base);
	return (find_sqrt(base + 1, n));

}
