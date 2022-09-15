#include <stdio.h>
#include <math.h>

/**
 * main - finds the largest prime
 *
 * Description: Uses headers to link and a nested loops to achieve goal
 *
 * Return: 0 if no errors
 */
int main(void)
{
	unsigned long i = 2;
	unsigned long biggest = 0;
	unsigned long number = 612852475143;

	while (number > i)
	{
		while (number % i == 0)
		{
			if (i > biggest)
				biggest = i;
			number = number / i;
		}
		i++;
	}
	printf("%lu\n", biggest);
	return (0);
}
