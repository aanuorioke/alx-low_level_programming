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
	if (n%10 > 5)
		str = "and is greater than 5";
	else if (n%10 == 0)
                str = "and is 0";
	else if (n%10 > 6 && n%10 != 0)
                str = "and is less than 6 and not 0";
	printf("Last digit of %d is %s\n", n, str);
	return (0);
}
