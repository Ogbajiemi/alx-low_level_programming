#include "main.h"

/**
 * append_text_to_file - This functn appends text at the EOF
 *
 * @filename: Pointer to the name of the file
 *
 * @text_content: Pointer to a NULL terminated str
 *
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_ptr_open;
	int file_ptr_write;
	int l = 0;

	if (!filename)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[l] != '\0')
		{
			l++;
		}
	}

	file_ptr_open = open(filename, O_WRONLY | O_APPEND);
	file_ptr_write = write(file_ptr_open, text_content, l);

	if (file_ptr_open == -1 || file_ptr_write == -1)
	{
		return (-1);
	}

	close(file_ptr_open);

	return (1);
}
