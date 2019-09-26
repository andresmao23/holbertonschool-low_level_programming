#include "holberton.h"

/**
 * print_triangle - prints a triangle.
 *
 * @size: value to print triangle
 *
 * Return: void
 */

void print_triangle(int size)
{
	int i = 0;
	int j = 0;

	if (size > 0)
	{
		for (; i < size ; i++)
		{
			for (; j < size ; j++)
			{
				if ((i + j) >= size - 1)
					_putchar('#');
				else
					_putchar(' ');
			}
			_putchar('\n');
			j = 0;
		}
	}
	else
		_putchar('\n');
}
