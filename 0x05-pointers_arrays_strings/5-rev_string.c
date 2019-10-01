#include "holberton.h"
#include <stdio.h>
/**
 * rev_string - Print a string in reverse.
 *
 * @s: char array pointer to reverse
 *
 * Return void
 */
void rev_string(char *s)
{
	int i;
	int j = 0;
	int len = 0;
	char temp[10];

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		temp[i] = s[i];
		len++;
	}

	for (i = len - 1 ; i >= 0 ; i--)
	{
		s[j] = temp[i];
		j++;
	}
}
