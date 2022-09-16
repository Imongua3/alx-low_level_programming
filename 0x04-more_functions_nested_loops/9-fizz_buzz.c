#include <stdio.h>
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
int num;

	for (num = 1; num <= 100; ++num)
	{
		if (num % 3 == 0 && !(num % 5 == 0))
			printf("Fizz");
		else if (num % 5 == 0 && !(num % 3 == 0))
			printf("Buzz");
		else if (num % 3 == 0 && num % 5 == 0)
			printf("FizzBuzz");
		else
			printf("%d", num);
		if (num != 100)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
