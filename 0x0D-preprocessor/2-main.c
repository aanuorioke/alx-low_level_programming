#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the name of the file the program was compiled with
 * Return: success
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
