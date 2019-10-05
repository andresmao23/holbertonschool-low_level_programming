#include "holberton.h"
/**
 * print_times_table - Prints 9 table.
 *
 * @n: size of the matriz
 *
 * Return: Always 0.
 */
void print_times_table(int n)
{
	int i, j, mult;

	if (n > 0 && n <= 15)
	{
		for (i = 0 ; i <= n ; i++)
		{
			for (j = 0; j <= n ; j++)
			{
				mult = i * j;

				if (j > 0)
					_putchar(',');
				if (mult <= 9 && j != 0)
					_putchar(' ');
				if (mult <= 99 && j != 0)
					_putchar(' ');
				if (mult <= 999 && j != 0)
					_putchar(' ');
				if (mult >= 0 && mult <= 9)
					_putchar((mult % 10) + '0');
				if (mult >= 10 && mult <= 99)
				{
					_putchar((mult / 10) + '0');
					_putchar((mult % 10) + '0');
				}
				if (mult >= 100)
				{
					_putchar((mult / 100) + '0');
					_putchar(((mult % 100) / 10) + '0');
					_putchar((mult % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
