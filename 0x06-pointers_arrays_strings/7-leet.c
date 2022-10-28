#include "main.h"
/**
 * leet - encodes
 * @n: input
 * @a:
 * Return: the value
 */
char *leet(char *n)
{
	int i;
	int j;

	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (i = 0; n[i] != '\0'; i++;)
	{
		for (j = 0; n[i] != '\0'; i++)
		{
			if (n[i] == s[j])
			{
				n[i] == s1[j];
			}
		}
	}
		return (n);
}
