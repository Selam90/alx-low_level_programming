#include "main.h"
/**
 * count_word - count the number of words in string
 * @s: string
 * Return: cout of the string
 */
int count_word(char *s)
{
	int flag, c, w;
	flag = 0;
	w = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			flag = 0;
		else
		if (flag == 0)
		{
			flag = 1;
			w++;
		}
	}
	return (w);
}
