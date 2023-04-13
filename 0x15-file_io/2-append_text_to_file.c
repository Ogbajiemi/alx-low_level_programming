#include <stdio.h>
#include "main.h"

/**
 * append_text_to_file - a function that append text at the end of a file
 * @filename: this is the name of the file
 * @text_content: it is the null terminated strings
 *
 * Return: 1 if success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int p;
	int l;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		l = 0;
		while (text_content[l] != '\0')
			l++;
	}

	p = open(filename, O_WRONLY | O_APPEND);

	write(p, text_content, l);

	if (p == -1)
	{
		return (-1);
	}

	close(p);

	return (1);
}

