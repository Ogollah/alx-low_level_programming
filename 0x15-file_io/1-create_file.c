#include "main.h"

/**
 * create_file - Creates a file and writes a string to it.
 * @filename: Name of the file to be created.
 * @text_content: Text to be written to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int file_desc;
	ssize_t num_write;

	if (filename == NULL)
		return (-1);

	file_desc = open(filename, O_CREAT | O_RDWR | O_TRUNC, S_IRUSR | S_IWUSR);

	if (file_desc == -1)
		return (-1);

	if (text_content != NULL)
	{
		int len = 0;

		while (text_content[len])
		{
			len++;
		}
		num_write = write(file_desc, text_content, len);
		if (num_write == -1)
		{
			close(file_desc);
			return (-1);
		}
	}
	close(file_desc);
	return (1);
}
