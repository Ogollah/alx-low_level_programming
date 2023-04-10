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
	ssize_t num_write, num_read;
	FILE *file;
	char *buff;

	if (filename == NULL)
		return (0);

	file = fopen(filename, "r");

	if (file == NULL)
		return (0);

	buff = malloc(sizeof(char) * letters);

	if (buff == NULL)
		return (0);

	num_read = fread(buff, 1, letters, file);

	num_write = fwrite(buff, 1, num_read, stdout);

	fclose(file);

	if (num_write != num_read)
		return (0);

	return (num_write);
}
