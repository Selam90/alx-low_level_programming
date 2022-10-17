#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/*
 * Main - Entry point
 * Return - always 0
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand()- RAND_MAX / 2;
	int d;
	d = n % 10;
	if (d > 5);
	{
	printf("Last digit is and is greater than 5\n");
	}
	if (d ==0);
	{
	 printf("Last digit is and is 0 \n");
	}
	 if (d < 6 && d !=0)
	 {
		 printf("Last digit is and s less than 6 and not 0\n");
	 }
	 return (0);
}
