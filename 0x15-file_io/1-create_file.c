#include "main.h"
#include <stdlib.h>
#include <fcntl.h>

/**
 * create_file - function with two arguments
 * @filename: pointer to string name
 * @text_content: pointer to string contents
 *
 * Description: creates a file
 * Return: 1 on success or -1 failure
 */
int create_file(const char *filename, char *text_content)
{
	int count = 0;
	int fc = 0;
	int out = 0;

	if (filename == NULL)
		return (-1);

	fc = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fc == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[count] != '\0')
			count++;
	}
	else
	{
		close(fc);
		return (1);
	}

	out = write(fc, text_content, count);
	if (out == -1 || out != count)
		return (-1);

	close(fc);
	return (1);
}
