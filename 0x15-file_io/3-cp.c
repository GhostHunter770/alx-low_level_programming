#include "main.h"
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

#define BUFFER_SIZE 1024

/**
 * error_and_exit - print the exit error and returns the exit value.
 * @str: error string.
 * @exit_code: exit value.
 * Return: void
 */
void error_and_exit(char *str, int exit_code)
{
	dprintf(STDERR_FILENO, "%s\n", str);
	exit(exit_code);
}
/**
 * main - copies the content of a file to another file.
 * @argc: number of arguments passed
 * @argv: array of pointers to the arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int file_from;
	int file_to;
	char buffer[BUFFER_SIZE];
	ssize_t bytesN;

	if (argc != 3)
		error_and_exit("Usage: cp file_from file_to", 97);

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		error_and_exit("Error: Can't read from file NAME_OF_THE_FILE", 98);

	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_to == -1)
	{
		close(file_from);
		error_and_exit("Error: Can't write to NAME_OF_THE_FILE", 99);
	}
	while ((bytesN = read(file_from, buffer, BUFFER_SIZE)) > 0)
	{
		if (write(file_to, buffer, bytesN) != bytesN)
		{
			close(file_from);
			close(file_to);
			error_and_exit("Error: Can't write to NAME_OF_THE_FILE", 99);
		}
	}
	if (bytesN == -1)
	{
		close(file_from);
		close(file_to);
		error_and_exit("Error: Can't read from file NAME_OF_THE_FILE", 98);
	}

	if (close(file_from) == -1)
		error_and_exit("Error: Can't close fd FD_VALUE", 100);

	if (close(file_to) == -1)
		error_and_exit("Error: Can't close fd FD_VALUE", 100);

	return 0;
}
