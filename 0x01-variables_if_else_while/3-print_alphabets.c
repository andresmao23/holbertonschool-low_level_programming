#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	int a1 = 'A';
	int z1 = 'Z';
	int a = 'a';
	int z = 'z';

	for (; a <= z ; a++)
		putchar(a);
	for (; a1 <= z1 ; a1++)
		putchar(a1);
	putchar('\n');
	return (0);

}
