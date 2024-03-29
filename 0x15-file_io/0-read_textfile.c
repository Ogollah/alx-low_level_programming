#include "main.h"

/**
 * read_textfile - Reads a text file and prints
 *                 it to the POSIX standard output.
 * @filename: File to read from.
 * @letters: Number of letters to write.
 *
 * Return: Number of bytes written to stdout, or 0 if an error occurred.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t num_write, num_read, file;
	char *buff;

	if (filename == NULL)
		return (0);

	buff = malloc(sizeof(char) * letters);

	if (buff == NULL)
		return (0);

	file = open(filename, O_RDONLY);

	num_read = read(file, buff, letters);

	num_write = write(STDOUT_FILENO, buff, num_read);


	if (num_write == -1 || num_read == -1 || file == -1)
	{
		free(buff);
		return (0);
	}

	free(buff);
	close(file);
	return (num_write);
}
