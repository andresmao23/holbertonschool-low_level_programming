#include "holberton.h"

/**
 * reverse_array - reverse an array of strings.
 *
 * @a: array pointer to reverse
 * @n: array size
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int temp;

	for (i = 0 ; i < n / 2; ++i)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
