#include "main.h"

/**
 *read_textfile - Reads a text file and prints it to the POSIX standard output.
 * @filename: File we write from.
 * @letters: Number of of letters to write.
 *
 * Return: 0 if @filename NULL else write letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t num_write, num_read, file;
	char *buff;

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == NULL)
		return (0);

	buff = malloc(sizeof(char) * letters);

	if (buff == NULL)
		return (0);

	num_read = read(file, buff, letters);

	num_write = write(STDOUT_FILENO, buff, num_read);

	close(file);

	if (num_write != num_read)
		return (0);

	return (num_write);
}
