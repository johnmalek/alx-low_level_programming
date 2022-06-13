#include "main.h"
#include <stdio.h>
/**
 * print_array - a function that prints n elements of an array of integers
 * @a: input integer pointer
 * @n: number of elements to be printed
 * Return: Nothing
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	_putchar('\n');
}
