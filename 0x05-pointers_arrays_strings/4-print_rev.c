#include "main.h"
/**
 * print_rev - a function that prints a string in reverse
 * @s: input string pointer
 * Return: Nothing
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	while (i)
		_putchar(s[--i]);
	_putchar('\n');
}

