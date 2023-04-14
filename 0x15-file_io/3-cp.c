#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - a function that copy content of a file to another file
 * @argc: argument going into the program
 * @argv: pointer array
 * Return: the copied file
 */
int main(int argc, char *argv[])
{
	char bf[1024];
	int src_file, dest_file, rd = 1024, wrt = 0;

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to \n");
		exit(97);

	src_file = open(argv[1], O_RDONLY);
	if (src_file == -1 || rd == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);

	dest_file = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR
			| S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (dest_file == 1 || wrt == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to%s\n", argv[2]);
		close(src_file);
		exit(99);

	while (rd == 1024)
	{
		rd = read(src_file, bf, 1024);
		if (rd == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file%s\n", argv[1]);
			exit(98);

		wrt = write(dest_file, bf, rd);
		if (rd > wrt)
			dprintf(STDERR_FILENO, "Error: Can't write to%s\n", argv[2]);
			exit(99);

	}
	if (close(src_file == -1))
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", src_file);
		exit(100);

	if (close(dest_file == -1))
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest_file), exit(100);

	return (0);
}
