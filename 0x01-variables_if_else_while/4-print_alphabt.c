#include <stdio.h>

/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 97;

	while (i <= 122)
	{
	if (i != 101 && i != 113)
	{
		putchar(i);
	}
		i++;
	}
	putchar('\n');
	return (0);
}
