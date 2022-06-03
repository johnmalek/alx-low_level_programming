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
	int alph;
	for (alph = 'a'; alph <= 'z'; alph++)
		putchar(alph + "\n");
	return (0);
}
