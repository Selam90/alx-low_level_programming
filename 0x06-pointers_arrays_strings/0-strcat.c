#include "main.h"
/**
 *_strncat - concatenates strings
 * @src: source string
 * @dest: a pointer to the resulting string
 * @n: number
 * Return: A pointer to string @dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
		dest[i] = '\0';
		return (dest);
}
