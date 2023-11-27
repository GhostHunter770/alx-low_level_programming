#include "main.h"
#include <stdlib.h>
#include <fcntl.h>

/**
 * append_text_to_file - function with two arguments
 * @filename: pointer to name of file
 * @text_content: pointer to string content
 *
 * Description: function that appends to text at the end of a file
 * Return: 1 on success or -1 for failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fc;
	ssize_t len;
	ssize_t write_count;

	if (filename == NULL)
		return -1;

	fc = open(filename, O_WRONLY | O_APPEND);
	if (fc == -1)
		return -1;

	if (text_content != NULL)
	{
		len = 0;
		while (text_content[len])
			len++;
		
		write_count = write(fc, text_content, len);
		if (write_count == -1 || write_count != len)
		{
			close(fc);
			return -1;
		}
	}

	close(fc);
	return 1;
}
