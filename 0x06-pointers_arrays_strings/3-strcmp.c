#include "holberton.h"
/**
 * _strcmp - compare two strings.
 *
 * @s1: char array pointer to compare
 * @s2: char array pointer to compare
 *
 * Return: @res - comparison result
 */
int _strcmp(char *s1, char *s2)
{
	int i, res;

	for (i = 0 ; s1[i] != '\0' && s2[i] != '\0' ; i++)
	{
		res = s1[i] - s2[i];
		if (res != 0)
			break;
	}
	return (res);
}
