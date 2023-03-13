#include "main.h"

/**
 * _strspn - Length of prefix
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int k = 0;
	int q;

	while (*s)
	{
		for (q = 0; accept[q]; q++)
		{
			if (*s == accept[q])
			{
				k++;
				break;
			}
			else if (accept[q + 1] == '\0')
				return (k);
		}
		s++;
	}
	return (k);
}
