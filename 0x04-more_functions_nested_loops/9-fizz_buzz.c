#include "main.h"

/**
 * main - fizz bizz holterton style
 *
 * Description: Uses headers to link and a nested loops to achieve goal
 *
 * fizz buzz from 1-100. print fizz for multiples of 3 and buzz for
 *
 * multiples of 5 and fizzbuzz for multiples of both eg. 15
 *
 * Return: 0 if no errors
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)

			_putchar("FizzBuzz");
		else if (i % 3 == 0)
			_putchar("Fizz");
		else if (i % 5 == 0)
			_putchar("Buzz");
		else
			_putchar("%d", i);
		if (i != 100)
			_putchar(" ");
	}
	_putchar("\n");
	return (0);
}
