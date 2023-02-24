#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 *
 * followed by a new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	long int p;
	long int largest;
	long int q;

	p = 612852475143;
	largest = -1;

	while (p % 2 == 0)
	{
		largest = 2;
		p /= 2;
	}

	for (q = 3; q <= sqrt(p); q = q + 2)
	{
		while (p % q == 0)
		{
			largest = q;
			p = p / q;
		}
	}

	if (p > 2)
		largest = p;

	printf("%ld\n", largest);

	return (0);
}

