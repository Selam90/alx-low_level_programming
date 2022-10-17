#include <stdio.h>
/*
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	/* function main -display reverse alphabet
	 *
	 */
	char c;

	for (c = 'z'; c >= 'a'; c--)
{
	putchar(c);
}
putchar('\n');
return (0);
}
