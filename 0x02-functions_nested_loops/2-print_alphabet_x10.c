#include "holberton.h"

/**
 * print_alphabet_x10 - writes the character c to stdout
 * @void: The character to print
 *
 */

void print_alphabet_x10(void)
{

	int a = 'a';
	int z = 'z';
	int i = 0;

	for ( ; i < 10 ; i++)
	{
		for ( ; a <= z ; a++)
			_putchar(a);
		a = 'a';
		_putchar('\n');
	}

}
