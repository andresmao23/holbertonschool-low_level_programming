#include "holberton.h"
/**
 * times_table - prints a table
 *
 * Return: void
 *
 */
void times_table(void)
{
	int n, i;

	for (i = 0 ; i < 10 ; i++)
	{
		for (n = 0; n < 10; n++)
		{
			if (n != 9)
			{
				if ((i * n) > 9)
				{
					_putchar(((i * n) / 10) + '0');
					_putchar(((i * n) % 10) + '0');
					_putchar(',');
					_putchar(' ');
				}
				else
				{
					_putchar(i * n + '0');
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}
			else
			{
				if ((i * n) > 9)
				{
					_putchar(((i * n) / 10) + '0');
					_putchar(((i * n) % 10) + '0');
				}
				else
					_putchar(i * n + '0');
			}
		}
		_putchar('\n');
	}
}
