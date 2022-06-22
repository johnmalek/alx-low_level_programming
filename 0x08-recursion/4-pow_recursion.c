#include "main.h"
/**
 * _pow_recursion - a function that returns the value of x rasied to y
 * @x: input integer
 * @y: input integer to raise x to
 * Return: integer value of x raised to y
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	else
		return (x * x * _pow_recursion(x, y - 2));
}
