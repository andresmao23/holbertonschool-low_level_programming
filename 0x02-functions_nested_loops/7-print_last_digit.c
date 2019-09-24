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

	int last = n % 10;

	if (last <= 0)
	{
		last = -last;
		_putchar(last + '0');
	}
	else
		_putchar(last + '0');

	return (last);

}
