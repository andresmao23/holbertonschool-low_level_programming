#include "holberton.h"

/**
 * print_numbers - multiply two numbers.
 *
 * Return: void
 */

void print_numbers(void)
{
	int i = 0;

	for (; i <= 9 ; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
