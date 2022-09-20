#include "main.h"

/**
 * _puts - Prints a string to stdout.
 * Description: prints a string to stdout.
 * @str: The string to be printed.
 */
void _puts(char *str)
{
	int j = 0;

	while (*(str + j) != '\0')
	{
		_putchar(*(str + j));
		j++;
	}
	_putchar('\n');
}
