#include "holberton.h"
/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: parameter to check
 *
 * Return: @last
 */
int print_last_digit(int n)
{

	int last = 0;

	if (n < 0)
	{
		last = -n % 10;
		_putchar(last + '0');
	}
	else
	{
		last = n % 10;
		_putchar(last + '0');
	}
	return (last);

}
