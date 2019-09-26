#include "holberton.h"

/**
 * _isdigit - check if the parameter is digit.
 *
 * @c: parameter to check
 *
 * Return: 1 if the parameter is digit, 0 otherwise.
 */

int _isdigit(int c)
{
	if (c >= 48  && c <= 57)
		return (1);
	else
		return (0);
}
