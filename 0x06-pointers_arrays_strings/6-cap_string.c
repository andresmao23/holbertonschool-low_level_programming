#include "holberton.h"
/**
 * cap_string - capitalize string.
 *
 * @cap: string to check
 *
 * Return: @cap
 */
char *cap_string(char *cap)
{
	int i;
	char s[] = {10, 9, 32, 44, 46, 59, 33, 63, 34, 40, 41, 123, 125};
	int j;

	for (i = 0; cap[i] != '\0'; i++)
	{
		if (cap[i] >= 97 && cap[i] <= 122)
		{
			if (i == 0)
				cap[0] = cap[0] - 32;
			else
			{
				for (j = 0; s[j] != '\0'; j++)
				{
					if (cap[i - 1] == s[j])
						cap[i] = cap[i] - 32;
				}
			}
		}
	}
	return (cap);
}
