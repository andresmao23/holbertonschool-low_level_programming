#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	int a = 'a';
	int z = 'z';

	for (; a <= z ; a++)
	{
		if (a == 101 || a == 113)
			a++;
		putchar(a);
	}

	putchar('\n');
	return (0);

}
