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
 *print_exit_code - Print error and exit code.
 *@file_desc_from: value 1 to compare.
 *@file_desc_to: Value 2 compare.
 *Return: Void
 */
void print_exit_code(int file_desc_from, int file_desc_to)
{
	if (close(file_desc_from) == -1)
	{
		print_error("Error: Can't close fd %d\n", file_desc_from);
		exit(100);
	}
	if (close(file_desc_to) == -1)
	{
		print_error("Error: Can't close fd %d\n", file_desc_to);
		exit(100);
	}
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
		print_error("Usage: cp file_from file_to\n", NULL);
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
	ssize_t num_r, df, dt, p = (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	char *file_from = argv[1], *file_to = argv[2], buffer[BUFFER_SIZE];

	print_arg_error(argc);

	df = open(file_from, O_RDONLY);

	if (df == -1)
	{
		print_error("Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	dt = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, p);

	if (dt == -1)
	{
		print_error("Error: Can't write to %s\n", file_to);
		exit(99);
	}

	while ((num_r = read(df, buffer, BUFFER_SIZE)) > 0)
	{
		if (write(dt, buffer, num_r) == -1)
		{
			print_error("Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}
	if (num_r == -1)
	{
		print_error("Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	print_exit_code(df, dt);
	return (0);
}
