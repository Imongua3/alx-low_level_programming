#include "main.h"

/**
* reverse_array - reverses the content of an array of integers
* @a: An array of integers
* @n: Number of elements to swap
* Return: empty.
*/
void reverse_array(int *a, int n)
{
	int *d, i, aux, j;

	d = a;
	for (i = 1; i < n; i++)
	{
		d++;
	}
	for (j = 0; j < i / 2; j++)
	{
		aux = a[j];
		a[j] = *d;
		*d = aux;
		d--;
	}
}
