#include "main.h"

/**
 *append_text_to_file - Appends a text at the end of a file object
 *@filename: file to be created
 *@text_content: A string pointer to be written to the appended at the end.
 *
 *Return: 1 else -1.
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
