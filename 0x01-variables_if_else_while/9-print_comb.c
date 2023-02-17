#include <stdio.h>
/**
 * main - main block
 * Description:
 * Return: 0
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar(a + '0');
		if (a < 9)
		{
			putchar(',');
			puthcar(' ');
		}
	}
	putchar('\n');
	return (0);
}
