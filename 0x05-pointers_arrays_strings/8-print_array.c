#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an array
 * @a: array 
 * @n: number
 */
void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);
		if (index == n - 1)
			continue;
		printf(", ");
	}
	printf("\n");
}
