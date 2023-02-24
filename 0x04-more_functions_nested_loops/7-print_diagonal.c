#include "main.h"

/**
 * print_diagonal - draws a diagonal lines according parameter
 * @n: the number of times to orint diagonal lines
 * Return: empty
 */

void print_diagonal(int n)
{
	int x, y;

	if (b <= 0)
	{
		_puthcar('\n');
	}
	else
	{
		for (x =0; x < n; x++)
		{
			for (y = 0; y < x; y++)
			{
				_putchar(32);
			
		_putchar(92);
		_putchar('\n');
			}
		}
	}
}
