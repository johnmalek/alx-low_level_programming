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
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n % 10 > 5)
		printf("Last digit of %d is and is grater than 5", n);
	else if (n % 10 < 6 && n != 0)
		printf("Last digit of %d is and is less than 6 and not 0", n);
	else
		printf("Last digit of %d is and is 0", n);
	return (0);
}
