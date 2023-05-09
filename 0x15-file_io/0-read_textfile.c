#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - function that reads a txt file and prints it.
 *
 * @filename: pointer to the file to be read
 *
 * @letters: no of letters to be read & print
 *
 * Return: 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	int file_ptr;
	ssize_t ptr_Read, ptr_Write;
	ssize_t ptr_Close;

	if (!filename)
		return (0);

	buf = malloc(sizeof(char) * letters);

	if (!buf)
		return (-1);

	file_ptr = open(filename, O_RDONLY);

	if (file_ptr == -1)
		return (0);

	ptr_Read = read(file_ptr, buf, letters);

	if (ptr_Read == -1)
		return (-1);

	ptr_Write = write(STDOUT_FILENO, buf, ptr_Read);

	if (ptr_Write == -1)
		return (-1);
	ptr_Close = close(file_ptr);

	if (ptr_Close == -1)
		return (-1);

	return (ptr_Read);
}
