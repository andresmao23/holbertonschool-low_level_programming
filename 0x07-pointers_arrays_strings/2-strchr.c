#include "holberton.h"
/**
 * _strchr - search a char in a string.
 * @s: char array source
 * @c: char to find
 *
 * Return: @s.
 */
char *_strchr(char *s, char c)
{
	char *p = s;

	while (*p != '\0')
	{
		if (*p == c)
			return (p);
		p++;
	}
	return p;
}
