#include "main.h"
#include <string.h>
/**
 * *_strncat - a function that concatenates two strings
 * @dest: input character pointer
 * @src: input character pointer
 * n: input integer for number of characters to be appended
 * Return: a character pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
