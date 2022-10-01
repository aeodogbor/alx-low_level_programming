#include "main.h"

/**
 * _strcat - function to concatenate two strings and return a new string
 *
 * @dest: string 1
 * @src: string 2
 * Return: char pointer
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;
	char *p;

	while (*(dest + 1) != '\0')
		i++;
	while (*(src + j) != '\0')
	{
		*(dest + 1) = *(src + j);
		i++;
		j++;
	}
	*(dest + 1) = '\0';
	p = dest;
	return (p);
}
