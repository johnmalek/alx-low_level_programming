#include <stdio.h>
/**
 * main - a function that prints the name of a program
 * @argc: argument counter
 * @argv: string of arguments passed
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
