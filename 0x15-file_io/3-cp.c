#include "main.h"

/**
 *print_error - Prints error message.
 *@message:Message to print
 *@arg: Value to print.
 *
 *Return: Void
 */
void print_error(char *message, char *arg)
{
	dprintf(STDERR_FILENO, message, arg);
}

/**
 *print_arg_error - Print error if arg is not 3.
 *@arg: No of arg
 *
 *Return: Void
 */
void print_arg_error(int arg)
{
	if (arg != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}

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
	char buf[BUFSIZ];

	print_arg_error(argc);

	fd_r = open(argv[1], O_RDONLY);
	if (fd_r == -1)
	{
		print_error("Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_w = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((i = read(fd_r, buf, BUFSIZ)) > 0)
	{
		if (fd_w == -1 || write(fd_w, buf, i) == -1)
		{
			print_error("Error: Can't write to %s\n", argv[2]);
			close(fd_r);
			exit(99);
		}
	}

	if (i == -1)
	{
		print_error("Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	j = close(fd_r);
	k = close(fd_w);
	if (j == -1 || k == -1)
	{
		print_error("Error: Can't close fd %d\n", fd_r);
		exit(100);
	}
	return (0);
}
