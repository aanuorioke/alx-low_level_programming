#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - alphabets
 * Description: prints the alphabets
 * Return: success code
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
