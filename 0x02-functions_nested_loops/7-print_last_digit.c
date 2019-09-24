#include "holberton.h"
#include <stdlib.h>
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

	last = abs(n) % 10;
	_putchar(last + '0');

	return (last);

}
