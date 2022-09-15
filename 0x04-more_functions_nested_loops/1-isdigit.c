#include "main.h"

/**
 * isdigid - Entry point
 * Checking if a character is a digid
 * @c:the integer value it receive
 *  Return: 1 if true. 0 if false.
 */
int _isdigit(int c);
{
	int i = '0';

	for (i = '0'; i <= '10'; i++)
	{
		/* testing condition for int c*/
		if (c == i)
		{
		return (1);
		}
	}
	return (0);
}
