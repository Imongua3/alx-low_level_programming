#include "main.h"

/**
 * _isupper - Entry point
 * check if a character is upper case
 * @c: the integer value it receives
 * Return: 1 if true. 0 if false.
 */
int _islower(int c)
{
	int i = 'A';

	for (i = 'A'; i <= 'Z'; i++)
	{
		/* testing condition for int c*/
		if (c == i)
		{
			return (1);
		}
	}
	return (0);
}
