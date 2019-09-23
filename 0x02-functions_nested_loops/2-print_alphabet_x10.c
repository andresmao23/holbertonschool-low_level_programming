#include "holberton.h"

/**
 * print_alphabet - Prints the alphabet
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{

	int a = 'a';
	int z = 'z';
	int i = 0;

	while (i < 10)
	{
		while (a <= z)
		{
			_putchar(a);
			a++;
		}
		a = 'a';
		i++;
		_putchar('\n');
	}

}
