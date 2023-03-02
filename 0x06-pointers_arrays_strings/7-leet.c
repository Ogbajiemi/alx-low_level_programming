#include "main.h"

/**
 * leet - encode into 1337speak
 *
 * @n: input value
 *
 * Return: n value
 */

char *leet(char *n)
{
	int t;
	int k;

	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (t = 0; n[t] != '\0'; t++)
	{
		for (k = 0; k < 10; k++)
		{
			if (n[t] == s1[k])
			{
				n[t] = s2[k];
			}
		}
	}
	return (n);
}
