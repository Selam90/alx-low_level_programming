#include "main.h"
/**
 * _strcat - concatenates strings
 * @src: source string
 * @dest: a pointer to the resulting string
 * Return: A pointer to string @dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
        int j;

	while (dest[i] != '\0' )
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
		dest[i] = src[j];

	return (dest);
}
