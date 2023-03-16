#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 *
 * @s1: string to append to
 *
 * @s2: string to concatenate from
 *
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int p, q, k;
	char *s;

	if (s1 == NULL)
		p = 0;
	else
	{
		for (p = 0; s1[p]; p++)
			;
	}
	if (s2 == NULL)
		q = 0;
	else
	{
		for (q = 0; s2[q]; q++)
			;
	}
	if (q > n)
		q = n;
	s = malloc(sizeof(char) * (p + q + 1));
	if (s == NULL)
		return (NULL);
	for (k = 0; k < p; k++)
		s[k] = s1[k];
	for (k = 0; k < q; k++)
		s[k + p] = s2[k];
	s[p + q] = '\0';
	return (s);
}
