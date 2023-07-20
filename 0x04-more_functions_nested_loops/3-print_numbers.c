#include "main.h"
/**
 * print_numbers - prints the numbers, from 0 to 9, followed by a new line
 *
 * Return: always 0
 */
void print_numbers(void)
{
	char a = '0';

	while (a <= '9')
	{
		_putchar(a);
		_putchar('\n');
		a++;
	}
}
