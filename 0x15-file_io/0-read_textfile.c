#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - functn that read a textfile and print to the standard output
 * @filename: file to be read
 * @letters: number of letters to be read
 *
 * Return: the number of letters read/print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fp;
	char *bf;
	ssize_t r, w;

	if (filename == NULL)
	{
		return (0);
	}

	bf = malloc(sizeof(char) * letters);
	if (bf == NULL)
	{
		return (0);
	}

	fp = open(filename, O_RDONLY);
	if (fp == -1)
	{
		free(bf);
		return (0);
	}
	r = read(fp, bf, letters);
	w = write(STDOUT_FILENO, bf, r);

	close(fp);
	return (w);

}

