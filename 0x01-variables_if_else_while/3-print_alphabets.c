#include <stdio.h>

/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i=97;
	int I= 65;

	while (i < 122)
	{
		putchar(i);
		i++;
	}
	while (i < 90)
	{
		putchar(I);
		I++;
	}
	putchar('\n');
	return (0);
}
