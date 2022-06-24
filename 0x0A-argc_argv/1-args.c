#include "main.h"
#include <stdio.h>
/**
 * main - a function that prints the number of arguments passed
 * @argc: argument count
 * @argv: argument value, a string of argumnets
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	if (argv[0])
		printf("%d\n", argc - 1);
	return (0);
}
