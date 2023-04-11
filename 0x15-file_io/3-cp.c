#include "main.h"

/**
 *main -Copy text to another file.
 *@argc: arg count.
 *@argv: arg array.
 *
 *Return: exit 0.
 */
int main(int argc, char *argv[])
{
	int ret_value, from_file_desc, to_file_desc, num_read, num_write;
	char buff[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n",
			argv[0]);
		exit(97);
	}

	from_file_desc = open(argv[1], O_RDONLY);

	if (from_file_desc == -1)
	{
		dprint(STDERR_FILENO, "Error: Can't read from file %s\n",
		       argv[1]);
		exit(98);
	}

	to_file_desc = open(argv[2], O_CREAT | O_WRONLY |
			    O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP |
			    S_IWGRP | S_IROTH);

	if (to_file_desc == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	num_read = read(from_file_desc, buff, BUFFER_SIZE);

	if (num_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			argv[1]);
		close(from_file_desc);

		if (close(from_file_desc) == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n",
				from_file_desc);
			exit(100);
		}

		close(to_file_desc);
		if (close(to_file_desc) == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n",
				to_file_desc);
			exit(100);
		}
		exit(98);
	}

	while (num_read > 0)
	{
		if (num_write != num_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
				argv[2]);
			close(from_file_desc);
			if (close(from_file_desc) == -1)
			{
				dprintf(STDERR_FILENO,
					"Error: Can't close fd %d\n",
					from_file_desc);
				exit(100);
			}
			close(to_file_desc);
			if (close(to_file_desc) == -1)
			{
				dprintf(STDERR_FILENO,
					"Error: Can't close fd %d\n",
					to_file_desc);
				exit(100);
			}
			exit(99);
		}
	}
	exit(0);
}
