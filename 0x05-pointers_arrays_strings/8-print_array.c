#include "main.h"
#include <stdio.h>
/** 
 * print array - prints
 * @a: array
 * @n: num
 */
void print_array(int *a, int n)
{
	int t;

	for (t = 0; t < n; t++)
	{
		printf("%d", a[t]);
		if (t != n - 1)
			printf(", ");
	}
	printf("\n ");
}
