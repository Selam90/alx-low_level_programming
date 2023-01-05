#include "main.h"
/**
 * _strlen_recursion- check for the length of the string
 * @s: string
 * Return: length of sting
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	return (_strlen_recursion(s));
}
