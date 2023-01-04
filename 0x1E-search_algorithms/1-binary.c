#include "search_algos.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * binary_search - binary search algorithm for arrays.
 * @array: array to be searched.
 * @size: size of the array.
 * @value: value to be search.
 * Return: index of the value if it exists, -1 otherwise.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t l = 0, r = size - 1, mid, i;

	if (!array || size <= 0)
		return (-1);
	while (l < r)
	{
		printf("Searching in array: ");
		for (i = 1; i <= r; i++)
		{
			if (i < r)
				printf("%d", array[i]);
			else
				printf("%d\n", array[i]);
		}
		mid = (l + r) / 2;
		if (value == array[mid])
			return (mid);
		else if (value < array[mid])
			r = mid - 1;
		else
			l = mid + 1;
	}
	return (-1);
}
