#include "main.h"

/**
 * rev_string - Reverses a string
 *
 * @s: Input string
 *
 * Return: String in reverse
 */

void rev_string(char *s)
{
	char rev = s[0];
	int len = 0;
	int k;

	while (s[len] != '\0')
	len++;
	for (k = 0; k < len; k++)
	{
		len--;
		rev = s[k];
		s[k] = s[len];
		s[len] = rev;
	}
}

