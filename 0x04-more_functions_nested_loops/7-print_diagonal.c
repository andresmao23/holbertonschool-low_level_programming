#include "holberton.h"

/**
 * print_diagonal - prints a line for n times.
 *
 * @n: value to print lines
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int i = 0;
	int j = 0;

	if (n > 0)
	{
		for ( ; i < n ; i++ )
		{
			for ( ; j < i ; j++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
			j = 0;
		}
	}
	else
		_putchar('\n');
}
