#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * if odd len, b = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
	int a, b, len;

	len = 0;

	for (a = 0; str[a] != '\0'; a++)
		len++;

	b = (len / 2);

	if ((len % 2) == 1)
		b = ((len + 1) / 2);

	for (a = b; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}
