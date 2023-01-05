#include "main.h"
/**
 * factorial - factory of the numb
 * @n: num
 * Return: factory
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}

