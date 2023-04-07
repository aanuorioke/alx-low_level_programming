#include "main.h"
int is_prime(int n, int divisor);

/**
 * is_prime_number - function
 * Description: checks if a number is a prime number
 * @n: number to be checked
 * Return: int
 */
int is_prime_number(int n)
{
	int divisor = 2;

	return (is_prime(n, divisor));
}

/**
 * is_prime - function
 * Description: uses a divisor to check if a number is prime
 * @n: number to be checked
 * @divisor: divisor
 * Return: int
 */
int is_prime(int n, int divisor)
{
	if (n <= 1)
		return (0);
	else if (divisor >= n)
		return (1);
	else if (n % divisor == 0)
		return (0);
	return (is_prime(n, divisor + 1));
}
