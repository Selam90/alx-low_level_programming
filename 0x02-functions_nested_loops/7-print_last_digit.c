#include "main.h"

/**
 * print_last_digit - print last digit
 * @n: the num
 * Return: 0 
 */
int print_last_digit(int n)
{
	int ld;

       	if (ld < 0)
		ld = -ld;
	ld = n % 10;
	_putchar(ld + '0');
	return (ld);
}
