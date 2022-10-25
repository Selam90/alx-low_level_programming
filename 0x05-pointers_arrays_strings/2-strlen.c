#include "main.h"

/**
 * _strlen - return string lenght
 * @s: string
 * Return: lenght
 */
int _strlen(char *s)
{

	int l = 0;

	while (*s != '\0')
	{
		l++;
		s++;
	}

	return (l);
}
