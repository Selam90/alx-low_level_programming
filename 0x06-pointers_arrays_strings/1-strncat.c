#include "main.h"
/**
* _strncat - joins two strings with n bytes
* @dest: copy to
* @src: source
* @n: number of char to be copied
* Return: dest
*/      
char *_strncat(char *dest, char *src, int n)
{
	strncat(*dest, *src, n);
	return (dest);
}
