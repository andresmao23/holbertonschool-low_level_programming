#include "holberton.h"

/**
 * print_line - prints a line for n times.
 *
 * @n: value to print lines
 *
 * Return: void
 */

void print_line(int n)
{
	int i = 0;

	for ( ; i < n ; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
