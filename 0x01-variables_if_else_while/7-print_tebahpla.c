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

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
