#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFSIZE 1024

void error_exit(char *msg, char *file, int code);

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success, exit with code on failure
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	ssize_t nread, nwrite;
	char buffer[BUFSIZE];

	if (argc != 3)
		error_exit("Usage: cp file_from file_to", NULL, 97);

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		error_exit("Error: Can't read from file", argv[1], 98);

	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
		error_exit("Error: Can't write to", argv[2], 99);

	while ((nread = read(fd_from, buffer, BUFSIZE)) > 0)
	{
		nwrite = write(fd_to, buffer, nread);
		if (nwrite == -1 || nwrite != nread)
			error_exit("Error: Can't write to", argv[2], 99);
	}

	if (nread == -1)
		error_exit("Error: Can't read from file", argv[1], 98);
	if (close(fd_from) == -1)
		error_exit("Error: Can't close fd", NULL, 100);

	if (close(fd_to) == -1)
		error_exit("Error: Can't close fd", NULL, 100);

	return (0);
}

/**
 * error_exit - prints an error message and exits with a code
 * @msg: the message to print
 * @file: the file name to print
 * @code: the exit code
 */
void error_exit(char *msg, char *file, int code)
{
	dprintf(STDERR_FILENO, "%s %s\n", msg, file);
	exit(code);
}
