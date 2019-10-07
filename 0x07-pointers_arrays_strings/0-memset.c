#include "holberton.h"
/**
 * _memset - fill an array buffer in hexa
 * @s: array to fill
 * @b: char to set
 * @n: parameter to check
 * Return: @s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
