#include "holberton.h"
/**
 * print_rev - Print a string in reverse.
 *
 * @s: pointer to print
 *
 * Return void
 */
void print_rev(char *s)
{
	int i, len;

	for (i = 0 ; s[i] != '\0' ; i++)
		len++;
	for (i = len ; i >= 0 ; i--)
		_putchar(s[i]);
	_putchar('\n');
}
