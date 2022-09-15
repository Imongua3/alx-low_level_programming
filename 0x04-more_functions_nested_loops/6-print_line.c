#include "main.h"

/**
 * print_line - prints underscores a number of times
 *
 * @n: an int given by main
 *
 * Description: Uses headers to link and a nested loops to achieve goal
 *
 * Return: void. no return.
 */
void print_line(int n)
{
	int y;

	if(n>0)
	{
		for (y = 1; y <= n, y++)
		{
		_putchar(95);
	}
		}
	_putchar('\n');
}
