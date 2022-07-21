#include "main.h"
/**
 * flip_bits - A function that gets number of bits needed to flip
 * @n: How many bit flips are needed to equal m for n
 * @m: The number to set other equal
 * Return: The number of fliped bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int shift = (sizeof(n) * BYTE_LENGHT);
	int dist = 0;

	while (shift--)
		dist += (n >> shift & 1) != (m >> shift & 1);
	return (dist);
}
