#include <stdio.h>

/**
 * main - Prints the numbers of base 16
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 48;
	int I = 97;

	while (i <= 57)
	{
		putchar(i);
		i++;
	}
	while (I <= 102)
	{
		putchar(I);
		I++;
	}
	putchar('\n');
	return (0);
}
