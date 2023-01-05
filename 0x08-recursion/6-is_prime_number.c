#include "main.h"
int check_prime(int, int);
/**
 * is_prime_number - prim
 * check_prime - check 
 */
int is_prime_number(int n)
{
	return (check_prime(n, 1));
}
int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0 && i > 1)
		return (0);
	if ((n / 1) < i)
		return (1);
	return (check_prime(n, i + 1));
}
