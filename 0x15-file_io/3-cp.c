#include "main.h"

void print_arg_error(int x);

/**
 *main -Copy text to another file.
 *@argc: arg count.
 *@argv: arg array.
 *
 *Return: 0.
 */
int main(int argc, char *argv[])
{
	int fd_r, fd_w, i, j, k;
	char buf[BUFSIZ], *file_from = argv[1], *file_to = argv[2];

	print_arg_error(argc);

	fd_r = open(argv[1], O_RDONLY);
	if (fd_r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	fd_w = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
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
	j = close(fd_r);
	k = close(fd_w);
	if (j == -1 || k == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_r);
		exit(100);
	}
	return (0);
}

/**
 *print_arg_error - Print error if arg is not 3.
 *@x: No of arg
 *
 *Return: Void
 */
void print_arg_error(int x)
{
	if (x != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}
