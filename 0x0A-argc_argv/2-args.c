#include <stdio.h>
/**
 * argc: argc parameter
 * argv: an array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("argv index %d is = %s\n", i, argv[i]);
	}
	printf("argv index %d is = %s\n", argc, argv[argc]);
	return (0);
}
