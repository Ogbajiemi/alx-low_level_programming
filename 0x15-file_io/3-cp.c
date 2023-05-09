#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - this program will copy a file to another file
 *
 * @argc: argument counter
 *
 * @argv: argument vector
 *
 * Return: the whole copied file
 */

int main(int argc, char *argv[])
{
	int copied;
	char buf[1024];
	int space1, space2;

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	space1 = open(argv[1], O_RDONLY);
	if (space1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	space2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (space2 == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	while ((copied = read(space1, buf, 1024)) > 0)
	{
		if (copied == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		copied = write(space2, buf, copied);
		if (copied == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (copied == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(space1) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", space1), exit(100);
	if (close(space2) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", space2), exit(100);

	return (0);
}
