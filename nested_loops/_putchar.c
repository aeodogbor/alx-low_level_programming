#include <unistd.h>

/**
 * _putchar - prints char c to stdout
 *
 * @c - character to be printed
 *
 * Return: 1 on success
 * -1 on failure or an errno is set appriopriately,
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
