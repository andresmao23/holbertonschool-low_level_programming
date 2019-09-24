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

	for ( ; a <= z ; a++)
		_putchar(a);
	_putchar('\n');

}
