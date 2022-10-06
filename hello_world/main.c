#include <stdio.h>
#include "main.h"

/**
 * main - entrypoint
 *
 * Return : Always 0
 */
int main(void)
{
	int squared;

	squared = getSquare('c');
	printf("The valude of squared is: %d\n", squared);
	return (0);
}
