#include "main.h"
#include <stdlib.h>
#include <fcntl.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fc;
	ssize_t readout;
	ssize_t	writeout;
	char *buffer;

	if (filename == NULL)
		return (0);
	fc = open(filename, O_RDONLY);
	if (fc == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fc);
		return (0);
	}
	readc = read(fc, buffer, letters);
	close(fc);
	if (readc == -1)
	{
		free(buffer);
		return (0);
	}
	writec = write(STDOUT_FILENO, buffer, readc);
	free(buffer);
	if (readc != writec || writec == -1)
	{
		return (0);
	}
	return (writec);
}
