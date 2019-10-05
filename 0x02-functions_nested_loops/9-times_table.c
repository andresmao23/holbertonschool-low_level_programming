#include "holberton.h"
/**
 * fill_table - fill a matriz
 *
 * @table: matriz
 *
 * Return: void
 *
 */
void fill_table(int table[10][10])
{
	int i, j;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 0 ; j < 10 ; j++)
			table[i][j] = i * j;
	}
}

/**
 * times_table - Prints 9 table.
 *
 * Return: Always 0.
 */
void times_table(void)
{
	int i, j;
	int table[10][10];

	/* Fill table */
	fill_table(table);

	/* Print the table */
	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 0 ; j < 10 ; j++)
		{
			if (table[i][j] < 10)
			{
				_putchar((table[i][j] % 10) + '0');
				if (j != 9)
				{
					_putchar(',');
					_putchar(' ');
					if (table[i][j + 1] < 10)
					{
						_putchar(' ');
					}
				}
			}
			else
			{
				_putchar((table[i][j] / 10) + '0');
				_putchar((table[i][j] % 10) + '0');
				if (j != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
