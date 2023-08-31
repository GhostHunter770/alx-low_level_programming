#include "main.h"
/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b:  is pointing to a string
 * Return:the converted number, or 0 if fail
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int decimalNUM = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (*b)
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		decimalNUM = decimalNUM * 2 + (*b - '0');
		b++;
	}
	return (decimalNUM);
}
