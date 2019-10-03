#include "holberton.h"
#include <stdio.h>
/**
 * cap_string - capitalize string.
 *
 * @s: string to check
 *
 * Return: @s
 */
char *cap_string(char *s)
{
	int i = 0, j;
	char sepa[] = {9, 10, 32, 33, 34, 40, 41, 44, 46, 59, 63, 123, 125};

	printf("%s", s);
	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if (i == 0)
				s[i] -= 32;
		}
		else
		{
			for (j = 0 ; j < 13 ; j++)
			{
				if (s[i - 1] == sepa[j])
					s[i] -= 32;
			}
		}
		i++;
	}
	return (s);
}
