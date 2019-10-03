#include "holberton.h"

/**
 * string_toupper - converts a string to upper.
 *
 * @s: string to check
 *
 * Return: void
 */
char *string_toupper(char *s)
{
	int i;
	char a;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			if (s[i] == a)
				s[i] = s[i] - 32;
		}
	}
	return (s);
}
