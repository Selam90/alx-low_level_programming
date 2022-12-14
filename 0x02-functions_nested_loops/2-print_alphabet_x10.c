#include "main.h"
/**
 * main - alpha
 * @ 2-print_alphabet_x10 - prints alphabet 10 times 
 */
void print_alphabet_x10(void)
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
