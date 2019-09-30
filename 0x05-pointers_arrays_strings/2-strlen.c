#include "holberton.h"
/**
 * _strlen - Shows the length of a char array.
 *
 * @s: pointer to check
 *
 * Return: @len.
 */
int _strlen(char *s)
{
	int i;
	int len = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
		len++;

	return (len);
}
