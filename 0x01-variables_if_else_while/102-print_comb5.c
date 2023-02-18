#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	int my_d1, my_d2;

	for (my_d1 = 0; my_d1 <= 98; my_d1++)
	{
		for (my_d2 = my_d1 + 1; my_d2 <= 99; my_d2++)
		{
			putchar((my_d1 / 10) + '0');
			putchar((my_d1 % 10) + '0');
			putchar(' ');
			putchar((my_d2 / 10) + '0');
			putchar((my_d2 % 10) + '0');

			if (my_d1 == 98 && my_d2 == 99)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
