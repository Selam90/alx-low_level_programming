#include <unsistd.h>
/**
 * _putchar - write
 * @c: char
 * Return :on success 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
