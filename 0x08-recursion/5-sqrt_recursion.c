#include "main.h"

int _sqrt(int, int);
/**
 * _sqrt_recursion - sqrt recursion
 * @n: num
 * Return: square root of num
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
int _sqrt(int n, int i)
{
	int sq = i * i;

	if (sq > n)
		return (-1);
	if (sq == n)
		return (i);
	return (_sqrt(n, i + 1));
}
