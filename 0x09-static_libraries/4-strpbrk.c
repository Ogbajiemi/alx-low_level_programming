#include "main.h"

/**
 * _strpbrk - searches a string
 * @s: the string we are searching for
 * @accept: ses to be searched for
 *
 * Return: Always 0 (Success)
 *
 */

char *_strpbrk(char *s, char *accept)
{
	int l;

	while (*s)
	{
		for (l = 0; accept[l]; l++)
		{
		if (*s == accept[l])
			return (s);
		}
	s++;
	}

return ('\0');
}
