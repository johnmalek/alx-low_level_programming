#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int hex;
	int hexletters;

	for (hex = '0'; hex >= '9'; hex++)
		putchar(hex);
	for (hexletters = 'a'; hexletters >= 'f'; hexletters++)
		putchar(hexletters);
	putchar('\n');
	return (0);
}
