#include "holberton.h"
#include <stdio.h>
/**
 * print_array - Print array.
 *
 * @a: char array pointer to print
 * @n: number of elements of the array
 *
 * Return void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		printf("%i", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
