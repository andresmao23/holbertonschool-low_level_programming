#include "holberton.h"
/**
 * puts_half - Print par.
 *
 * @str: char array pointer to print second half
 *
 * Return void
 */
void puts_half(char *str)
{
	int i = 0;
	int len = 0;
	int half;

	for (i = 0 ; str[i] != '\0' ; i++)
		len++;

	half = len / 2;

	for (i = half ; str[i] != '\0' ;i++ )
		_putchar(str[i]);
	_putchar('\n');
}
