#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Input string
 * Return: String in reverse
 */

void rev_string(char *s)
{
	char rev = s[0];
	int coounter = 0;
	int i;

	while (s[coounter] != '\0')
	coounter++;
	for (i = 0; i < coounter; i++)
	{
		coounter--;
		rev = s[i];
		s[i] = s[coounter];
		s[coounter] = rev;
	}
}
