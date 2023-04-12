#include <stdio.h>
#include "main.h"

/**
 * create_file - a function that create a file
 * @filename: name of the file to be created
 * @text_content: a null terminated string to write to the file
 *
 * Return: 1 on success and -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fp;
	int len = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	fp = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (text_content == NULL)
	{
		text_content = " ";
	}

	write(fp, text_content, len);

	if (fp == -1)
	{
		return (-1);
	}

	close(fp);

	return (1);
}




