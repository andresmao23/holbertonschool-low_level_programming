#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i = 1;

	for (; i <= 100 ; i++)
	{
		if (i != 100)
		{
			if (i % 3 == 0)
				printf("Fizz ");
			else if (i % 5 == 0)
				printf("Buzz ");
			else
				printf("%i ", i);
		}
		else
		{
			if (i % 3 == 0)
				printf("Fizz");
			else if (i % 5 == 0)
				printf("Buzz");
			else
				printf("%i", i);
		}
	}
	printf("\n");
	return (0);
}
