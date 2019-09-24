#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - prints numbers from 0 to 98
 *
 *@n: int number
 *
 *Return: always 0
 *
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	printf("98\n");
}
