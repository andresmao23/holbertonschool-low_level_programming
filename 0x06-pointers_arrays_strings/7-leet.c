#include "holberton.h"
/**
 * leet - encode a phrase.
 *
 * @s: string to check
 *
 * Return: @s
 */
char *leet(char *s)
{
	int i, j;
	char may[] = {'A', 'E', 'O', 'T', 'L'};
	char min[] = {'a', 'e', 'o', 't', 'l'};
	char num[] = {52, 51, 48, 55, 49};

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		for (j = 0 ; j < 5 ; j++)
		{
			if (s[i] == may[j] || s[i] == min[j])
				s[i] = num[j];
		}
	}
	return (s);
}
