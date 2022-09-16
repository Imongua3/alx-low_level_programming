#include "main.h"

/**
 * _isdigit - Entry point
 * Checking if a character is a digid
 * @c:the integer value it receive
 *  Return: 1 if true. 0 if false.
 */
int _isdigit(int c);
{
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
