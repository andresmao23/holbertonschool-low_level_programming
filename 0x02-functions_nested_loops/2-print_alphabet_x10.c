#include "holberton.h"

/**
 * print_alphabet - Prints the alphabet ten times
 *
 * Return: Always 0 (Success)
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
