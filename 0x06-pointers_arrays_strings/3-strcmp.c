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
	int s1_len = 0;
	int s2_len = 0;
	int res;
	char l1 = s1[0];
	char l2 = s2[0];

	for (; s1[s1_len] != '\0' ; s1_len++)
		;
	for (; s2[s2_len] != '\0' ; s2_len++)
		;
	if (s1_len < s2_len)
		res = l1 - l2;
	else if (s1_len > s2_len)
		res = l1 - l2;
	else
		res = (l1 + l2) - (l1 + l2);

	return (res);
}
