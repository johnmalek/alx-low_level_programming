#include "main.h"
/**
 * puts2 - a function that prints every character of a string
 * @str: input string pointer
 * Return: Nothing
 */
void puts2(char *str)
{
	int i = 0, l = 0;

	while (str[l] != '\0')
		i++;
	
	l -= 1;

	for (; i <= l; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
