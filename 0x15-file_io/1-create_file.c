#include "main.h"

/**
 * create_file - A func that creates a file.
 * @filename: A pointer to the filename to be created.
 * @text_content: A pointer to the NULL terminated string
 *
 * Return: -ve 1 if the func fails else +ve 1.
 */

int create_file(const char *filename, char *text_content)
{
	int div;
	int fnk;
	int l = 0;

	if (!filename)
		return (-1);

	if (text_content != NULL)
	{
		l = 0;
		while (text_content[l])
			l++;
	}

	div = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	fnk = write(div, text_content, l);

	if (div == -1 || fnk == -1)
		return (-1);

	close(div);

	return (1);
}

