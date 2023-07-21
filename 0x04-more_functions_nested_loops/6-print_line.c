#include "main.h"
/**
 * print_line - draws a straight line in the terminal.
 * @n: number of lines to be printed.
 *
 * Return: void
 */
void print_line(int n)
{
	int a = 1;

	while (a <= n)
	{
		if(n > 0)
		{
		_putchar('_');
		a++;
		}
		else
			break;
	}
	_putchar('\n');
}
