#include "main.h"

/**
 * append_text_to_file - Appends text to the end of a file.
 * @filename: Name of the file to be appended.
 * @text_content: Text to be appended to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_desc;
	ssize_t num_write;

	if (filename == NULL)
		return (-1);

	file_desc = open(filename, O_WRONLY | O_APPEND);

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
