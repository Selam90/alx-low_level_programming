#include "main.h"
/*
 * main - print alphabet
 * print_alphabet - print alphabet in lowercase
 * Return: Always 0
 */
void print_alphabet(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
		_putchar(l);
	_putchar('\n');
	return (0);
}
