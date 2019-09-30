#include "holberton.h"
/**
 * swap_int - Update pointers.
 *
 * @a: pointer to swap
 * @b: pointer to swap
 *
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int temp = *b;
	*b = *a;
	*a = temp;
}
