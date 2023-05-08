#include "main.h"

void print_arg_error(int x);

/**
 * main - Copy text from one file to another.
 * @argc: Number of arguments.
 * @argv: Array of arguments.
 *
 * Return: 0 on success, otherwise error code.
 */
int main(int argc, char *argv[])
{
	int fd_r, fd_w, i;
	char buf[BUFSIZ], *file_from = argv[1], *file_to = argv[2];

	print_arg_error(argc);

	fd_r = open(file_from, O_RDONLY);
	if (fd_r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	fd_w = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((i = read(fd_r, buf, BUFSIZ)) > 0)
	{
		if (fd_w == -1 || write(fd_w, buf, i) == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			close(fd_r);
			exit(99);
		}
	}

	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	if (close(fd_r) == -1 || close(fd_w) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_r);
		exit(100);
	}
	return (0);
}

/**
 * print_arg_error - Print error message if argument count is not 3.
 * @x: Number of arguments.
 *
 * Return: void
 */
void print_arg_error(int x)
{
	if (x != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}
