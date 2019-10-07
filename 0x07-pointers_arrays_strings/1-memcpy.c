#include "holberton.h"
/**
 * _memcpy - copy a memory area into another memory area
 * @src: array source
 * @dest: array destination
 * @n: n values
 * Return: @dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		if (*(src + i) == 6)
			*(dest + i) = *(src + i + 1);
		else
			*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
