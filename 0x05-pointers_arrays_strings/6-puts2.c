#include "holberton.h"
/**
 * puts2 - Print par.
 *
 * @str: char array pointer to print par
 *
 * Return void
 */
void puts2(char *str)
{
	int i = 0;

	while (*str)
	{
		if (i++ % 2 == 0)
			_putchar(*str);
		str++;
	}
	_putchar('\n');
}
