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
	int i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
			return (s + i);
		i++;
	}
	return (0);
}
