#include "holberton.h"
/**
 * rot13 - encode a phrase.
 *
 * @s: string to check
 *
 * Return: @s
 */
char *rot13(char *s)
{
	int i, j;
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		for (j = 0 ; input[j] != '\0' ; j++)
		{
			if (s[i] == input[j])
			{
				s[i] = output[j];
				break;
			}
		}
	}
	return (s);
}
