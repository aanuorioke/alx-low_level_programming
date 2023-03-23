#include "main.h"

/**
 * main - function
 * Description: prints numbers from 0 to 100
 * except multiples of 3 and 5
 * Return: Success code
 */
int main(void)
{
	int j;

	for (j = 1; j < 100; j++)
	{
		if (!(j % 3 == 0 || j % 5 == 0))
		{
			printf("%d", j);
		}
		else if (j % 3 == 0 && j % 5 == 0)
			printf("FizzBuzz");
		else if (j % 3 == 0)
			printf("Fizz");
		else if (j % 5 == 0)
			printf("Buzz");
		printf(" ");
	}
	printf("Buzz");
	printf("\n");
	return (0);
}
