#include "variadic_functions.h"

/**
 * print_numbers - function
 * Description: prints numbers with a given separator between them
 * @n: number of parameters
 * @separator: separator to be printed between each number
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list vars;

	if (n == 0)
		return;
	if (separator == NULL)
		separator = "";

	va_start(vars, n);
	for (i = 0; i < n - 1; i++)
		printf("%d%s", va_arg(vars, int), separator);
	printf("%d\n", va_arg(vars, int));
	va_end(vars);
}
