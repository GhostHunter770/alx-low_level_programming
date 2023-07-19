#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet, in lowercase, followed by a line
 */
void print_alphabet_x10(void)
{
	char a = 97;
	int b = 0;

	while (b < 10)
	{

	while (a <= 122)
	{
		_putchar(a);
		a++;
	}
	a = 97;
	_putchar('\n');
	b++;
	}
}
