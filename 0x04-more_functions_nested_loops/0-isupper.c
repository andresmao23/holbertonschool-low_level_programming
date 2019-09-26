#include "holberton.h"

/**
 * _isupper - check the code for Holberton School students.
 *
 * @c: parameter to check
 *
 * Return: Always 1 if is upper, 0 if is not upper
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
