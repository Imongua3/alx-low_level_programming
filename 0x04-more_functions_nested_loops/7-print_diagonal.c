#include "main.h"

/**
 * print_diagonal - prints a diagonal line with new line
 *
 * @n: an int given by main
 *
 * Description: Uses headers to link and a nested loops to achieve goal
 *
 * Return: void. no return.
 */
void print_diagonal(int n)
{
int postn, space;

	if (n <= 0)
		_putchar('\n');
		else
	{
		for (postn = 1; postn <= n; ++postn)
		{
			for (space = 1; space <= postn; ++space)
				_putchar(' ');
			_putchar(92); /*is equal to '/' char*/
			_putchar('\n');
		}
	}
}
