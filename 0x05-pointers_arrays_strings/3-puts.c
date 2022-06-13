#include <string.h>
#include "main.h"
/**
 * _puts - a function that prints a string to the stdout
 * @str: input string pointer
 * Return: Nothing
 */
void _puts(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		puts(str[i]);
		i++;
	}
	puts('\n');
}

