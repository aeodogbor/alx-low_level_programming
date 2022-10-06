#include <stdio.h>

/**
 * getSqure - get square of number passed
 *
 * @num: number to be squared
 *
 * Return: squared num or -1
 */
int getSquare(int num)
{
	if (sizeof(num) == sizeof(int))
	{
		return (num * num);
	}
	printf("Print enter a valid number!\n");
	return (-1);
}
