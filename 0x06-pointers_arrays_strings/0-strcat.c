#include "main.h"
/**
 *_strcat - concatenates strings
 * @src: source string
 * @dest: a pointer to the resulting string
 * Return: A pointer to string @dest
 */
char *_strcat(char *dest, char *src)
{
	int len = 0, i;

	while (dest[len])
		len++;
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[len] = src[i];
		len += 1;
	}
	dest[len] = '\0';
	return (dest);
}
