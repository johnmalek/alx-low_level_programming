#include "main.h"
#include <stdio.h>
/**
 * main - a function that prints all the arguments it receives
 * @argc: argument count
 * @argv: argument value, a string of arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc > 0)
	{
		for (i = 0; i < argc; i++)
			printf("%s\n", argv[i]);
	}
	return (0);
}

