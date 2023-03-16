#include <stdio.h>

/**
 * main - prints sizeg
 * Description: prints size of various types
 * Return: success code
 */
int main(void)
{
	printf("Size of a char: %d byte(s)\n", sizeOf(char));
	printf("Size of a char: %d byte(s)\n", sizeOf(int));
	printf("Size of a char: %d byte(s)\n", sizeOf(long int));
	printf("Size of a char: %d byte(s)\n", sizeOf(long long int));
	printf("Size of a char: %d byte(s)\n", sizeOf(float));
	return (0);
}
