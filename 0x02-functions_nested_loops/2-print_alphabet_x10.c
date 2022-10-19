#include "main.h"
/*
 * print alphabet 10 times
 */
void pritt_alphabet_x10(void)
{
	int s;
	char l;
	for (s = 0; s <= 9; s++)
	{
		for (l = 'a'; l <= 'z'; l++)
			_putchar(l);
		_putchar('\n');
	}
}
