#include "main.h"
/**
 * _puts2 - a function that prints every character of a string
 * @str: input string pointer
 * Return: Nothing
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		_putchar('\n');
		i++;
	}
}
