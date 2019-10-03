#include "holberton.h"
/**
 * _strcat - copy a string to the end of another string.
 *
 * @dest: char array pointer destination
 * @src: char array source
 *
 * Return: @dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
