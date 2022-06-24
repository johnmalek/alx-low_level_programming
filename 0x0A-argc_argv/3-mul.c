#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - a program that multiplies two numbers
 * @argc: argument count
 * @argv: argument value, a string of arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int product, n1, n2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[2]);	
		product = n1 * n2;
		printf("%d\n", product);
	}
	return (0);
}
