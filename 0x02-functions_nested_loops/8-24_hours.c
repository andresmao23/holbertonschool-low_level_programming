#include "holberton.h"
/**
 * jack_bauer - prints the jack bauers time
 *
 */
void jack_bauer(void)
{

	int n;
	int m;

	for (n = 0; n < 24; n++)
	{
		for (m = 0; m < 60; m++)
		{
			_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
			_putchar(':');
			_putchar(m / 10 + '0');
			_putchar(m % 10 + '0');
			_putchar('\n');
		}
	}

}
