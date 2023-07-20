#include "main.h"
/**
 * print_numbers - prints the numbers, from 0 to 9, followed by a new line
 *
 * Return: void
 */
void print_numbers(void)
{
	char a = '0';

	while (a <= '9')
	{
		if (a != '2' && a != '4')
		{
		_putchar(a);
		}
		a++;
	}
	_putchar('\n');
}
