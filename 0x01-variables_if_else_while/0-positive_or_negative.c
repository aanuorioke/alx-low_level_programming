#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	char* str = "";
	if (n > 0)
		str = "is positive";
	else if (n == 0)
                str = "is 0";
	else if (n < 0)
                str = "is negative";
	printf("%d %s\n", n, str);
	return (0);
}
