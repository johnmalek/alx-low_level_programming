#include "main.h"
#include <string.h>
/**
 * *_strncpy - a function that copies a string
 * @dest: input character pointer
 * @src: input character pointer
 * n: input integer specifying number of characters to be copied
 * Return: a character pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
