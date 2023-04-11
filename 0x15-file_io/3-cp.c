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
 *main -Copy text to another file.
 *@argc: arg count.
 *@argv: arg array.
 *
 *Return: 0.
 */
int main(int argc, char *argv[])
{
	ssize_t num_read;
	char *file_from = argv[1], *file_to = argv[2], buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		print_error("Usage: cp file_from file_to\n", NULL);
		exit(97);
	}

	int file_desc_from = open(file_from, O_RDONLY);

	if (file_desc_from == -1)
	{
		print_error("Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	int file_desc_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR |
				S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (file_desc_to == -1)
	{
		print_error("Error: Can't write to %s\n", file_to);
		exit(99);
	}

	while ((num_read = read(file_desc_from, buffer, BUFFER_SIZE)) > 0)
	{
		if (write(file_desc_to, buffer, num_read) == -1)
		{
			print_error("Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}
	if (num_read == -1)
	{
		print_error("Error: Can't read from file %s\n", file_from);
		exit(98);
	}

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
	return (0);
}
