#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0 in sucsess
 */
 char *_strdup(char *str)
{
	char *a;
	int i, r = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	a =  malloc(sizeof(char) * (i + 1));
	if (aaa == NULL)
		return (NULL);
	for (r = 0; str[r]; r++)
		a[r] = str[r];
	return(a);
}
