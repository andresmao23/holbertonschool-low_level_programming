#include "holberton.h"
#include <stdio.h>
/**
 * _strcpy - copy a string into another string.
 *
 * @dest: char array pointer destination
 * @src: char array source
 *
 * Return: @dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		if (src[i + 1] == '\0')
			dest[i + 1] = src[i + 1];
		i++;
	}
	return (dest);
}
