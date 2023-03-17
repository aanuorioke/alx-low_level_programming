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
	int digit;

	for (digit = 0; digit <= 9; digit++)
	{
		putchar(digit);
	}
	putchar('\n');
	return (0);
}
