#include <stdio.h>
/**
 * @argc: argc pariameter
 * @argv: an array 
 * Return: 0 for success
 */
int main(int argc, char *argv[]  __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
