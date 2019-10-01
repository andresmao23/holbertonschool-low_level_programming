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
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		if (str[i] % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
