#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>
/*
 * linear_search - a function to search for a value in an array
 * array: pointer to first element of array
 * size: the number of elements in array
 * value: value to search for
 * Return: first index where value is located
 */
int linear_search(int *array, size_t size, int value)
{
	long unsigned int i;
	if (!array || size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);			
}
