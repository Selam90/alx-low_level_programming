#include "main.h"
/*
 * 9's time table
 */
void times_table(void)
{
	int num, multi, value;
	for (num = 0; num <= 9; num++)
	{
		_putchar('0');
		for (multi = 1; multi <= 9; multi++)
		{
			_putchar(',');
			_putchar(' ');
		       value = num * multi;
	       if (value <= 9)
	_putchar(' '); 
	       else
	_putchar((value / 10) + '0' ); 	    
	    _putchar((value % 10) + '0');
		}
	     _putchar('\n');
	}
}	
