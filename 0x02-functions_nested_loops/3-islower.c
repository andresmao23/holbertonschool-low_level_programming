#include "holberton.h"
#include <ctype.h>

/**
 * _islower - check if the parameter is lower
 *
 * @c: parameter to check
 *
 * Return: Always 0 (Success)
 */

int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);

}
