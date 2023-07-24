#include "main.h"
/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int len = 0;
	int c = 0;
	char *x = str;
	int i;

	while (*x != '\0')
	{
		x++;
		len++;
	}
	c = len - 1;
	for (i = 0 ; i <= c ; i++)
	{
		if (i % 2 == 0)
	{
		_putchar(str[i]);
	}
	}
	_putchar('\n');
}
