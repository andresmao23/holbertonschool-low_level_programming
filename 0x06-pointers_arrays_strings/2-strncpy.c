#include "holberton.h"
/**
 * _strncpy - copy a string into another string.
 *
 * @dest: char array pointer destination
 * @src: char array source
 * @n: zise
 *
 * Return: @dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
