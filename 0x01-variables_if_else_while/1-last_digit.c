#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* main - determines the last digit
 * Return: always 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int n1 = n % 10;
	if ( n1 > 5 )
	{
		printf("Last digit of %d is %d is greater than 5\n", n, n1);
	}
	else if (n1 < 6 && n1 != 0)
	{
		printf("Last digit of %d is %d is less than 6 and not 0\n", n, n1);
	}
	else
	{
		printf("Last digit of %d is %d is 0\n", n, n1);
	}
	return (0);
}
