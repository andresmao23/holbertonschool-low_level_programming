#include "holberton.h"

/**
 * more_numbers - prints numbers from 0 to 14, 10 times.
 *
 * Return: void
 */

void more_numbers(void)
{
	int i = 0;
	int j = 0;

	for ( ; i < 10 ; i++)
	{
		for ( ; j <= 14 ; j++)
		{
			if (j >= 10)
				_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
		}
		j = 0;
		_putchar('\n');
	}
}
