#include "main.h"

/**
 * _is lower - checks if a character is lowercase
 * @c: character
 * Return: 1 if lower case, 0 if not
 * checks character is lowcase
 *
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else 
		return (0);
}
