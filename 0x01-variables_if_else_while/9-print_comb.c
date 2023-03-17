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

	for (digit = '0'; digit <= '8'; digit++)
	{
		putchar(digit);
		putchar(',');
		putchar(' ');
	}
	putchar('9');
	return (0);
}
