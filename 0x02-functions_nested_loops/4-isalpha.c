#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 *@c: The characterto be checked
 * Return:1 for alphabetic character or 0for anything else
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
