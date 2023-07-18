#include "main.h"

/**
 * print_alphabet -  prints the alphabet, in lowercase, followed by a new line
 */
void print_alphabet(void)
{
	char a = 97;

	while(a =< 122)
	{
		_putchar(a);
		_putchar('\n');
		a++;
	}
}
