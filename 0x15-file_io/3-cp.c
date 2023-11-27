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
	int fileFrom;
	int fileTo;
	char buffer[BUFFER_SIZE];
	ssize_t bytesN;

	if (argc != 3)
		error_and_exit("Usage: cp file_from file_to", 97);

	fileFrom = open(argv[1], O_RDONLY);
	if (fileFrom == -1)
		error_and_exit("Error: Can't read from file NAME_OF_THE_FILE", 98);

	fileTo = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fileTo == -1)
	{
		close(fileFrom);
		error_and_exit("Error: Can't write to NAME_OF_THE_FILE", 99);
	}
	while ((bytesN = read(fileFrom, buffer, BUFFER_SIZE)) > 0)
	{
		if (write(fileTo, buffer, bytesN) != bytesN)
		{
			close(fileFrom);
			close(fileTo);
			error_and_exit("Error: Can't write to NAME_OF_THE_FILE", 99);
		}
	}
	if (bytesN == -1)
	{
		close(fileFrom);
		close(fileTo);
		error_and_exit("Error: Can't read from file NAME_OF_THE_FILE", 98);
	}

	if (close(fileFrom) == -1)
		error_and_exit("Error: Can't close fd FD_VALUE", 100);

	if (close(fileTo) == -1)
		error_and_exit("Error: Can't close fd FD_VALUE", 100);

	return 0;
}
