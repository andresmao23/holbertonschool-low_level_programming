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
	int i, temp, j = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
		;
	i--;
	while (j < i)
	{
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;
		j++;
		i--;
	}
}
