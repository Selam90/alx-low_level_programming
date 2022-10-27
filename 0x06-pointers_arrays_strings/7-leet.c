#include "main.h"
/**
 * leet - encodes
 * @n: input
 * @a:
 * Return: the value
 */
char *leet(char *a)
{
	int i = 0;
	int j;
	int l = 5;

	char s1[] = {'A', 'E', 'O', 'T', 'L'};
	char s2[] = {'4', '3', '0', '7', '1'};

	while (a[i])
	{
		j = 0;
		while (b < l)
		{
			if (a[i] == s[b] || a[i] - 32 == s1[b])
				a[i] = s2[b];
			b++;
		}
		a++;
		return (a);
}
