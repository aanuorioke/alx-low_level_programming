#include "variadic_functions.h"

/**
 * print_strings - function
 * Description: prints strings with a given separator between them
 * @n: number of parameters
 * @separator: separator to be printed between each number
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list vars;
	char *next_str;

	if (n == 0)
		return;
	if (separator == NULL)
		separator = "";

	va_start(vars, n);
	for (i = 0; i < n - 1; i++)
	{
		next_str = va_arg(vars, char*);
		if (next_str == NULL)
			next_str = "(nil)";
		printf("%s%s", next_str, separator);
	}
	next_str = va_arg(vars, char*);
	if (next_str == NULL)
		next_str = "(nil)";
	printf("%s\n", next_str);
	va_end(vars);
}
