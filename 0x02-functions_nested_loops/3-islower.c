#include "main.h"
/**
 * _islower - checks for lowercase character
 *
 * @c: is the char to be checked.
 *
 * Returns: 1 if lower case, otherwaise 0.
 */
int _islower(int c)
{
	if (c >= 'a' && c<='z')
		return (1);
	else
		return (0);
}
