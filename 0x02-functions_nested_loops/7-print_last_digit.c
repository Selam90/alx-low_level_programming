include "main.h"

/*
 * pribt last digit
 *
 */
int print_last_digit(int n)
{
	int ld = n %10;
	if (ld <0)
		ld *= -1;
	_putchar(ld = '0');
	return (0);
}
