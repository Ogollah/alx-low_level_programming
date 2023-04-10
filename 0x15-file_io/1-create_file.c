#include "main.h"

/**
 *create_file - Create a file object
 *@filename: file to be created
 *@text_content: A string pointer to be written to the file
 *
 *Return: 1 else -1.
 */
int create_file(const char *filename, char *text_content)
{
	int file_desc;
	ssize_t num_write;

	if (filename == NULL)
		return (-1);

	file_desc = open(filename, S_IWUSR | S_IRUSR | O_WRONLY |
			 O_CREAT | O_TRUNC);

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
