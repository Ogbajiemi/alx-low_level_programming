#include <stdio.h>
#include "main.h"

/**
 * main - print number and passed it to the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, __attribute__ ((unused)) char *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}

