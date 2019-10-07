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
	int j;

	for (j = 0 ; *(s + j) ; j++)
	{
		if (*(s + j) == c)
			return (s + j);
	}
	if (*(s + j) == c)
		return (s + j);
	return (0);
}
