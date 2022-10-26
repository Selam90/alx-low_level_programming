#include "main.h"
/**
 * _strcat - concatenates strings
 * @src: source string
 * @dest: a pointer to the resulting string
 * Return: A pointer to string @dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, dest_len = 0;

	while (dest[i++])
		dest_len++;
	for (index = 0; src[i]; i++)
		dest[dest_len++] = src[i];
	return (dest);
}
