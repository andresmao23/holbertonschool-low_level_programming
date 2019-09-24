#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

	int i = 0;
	char holberton[] = "Holberton";
	int len = sizeof(holberton);

	for (; i < len; i++)
		_putchar(holberton[i]);

	_putchar('\n');

	return (0);

}
