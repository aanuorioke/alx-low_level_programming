#include "main.h"

/**
 * print_alphabet - function
 * Description: prints the alphabets
 * Return: Nothing 
 */
void print_alphabet (void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
