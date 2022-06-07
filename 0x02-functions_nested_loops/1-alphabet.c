#include <unistd.h>
#include "main.h"
/* Print alphabet
 * in lowercase
 * return 0
 * */
void print_alphabet(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
		_putchar(alph);
	_putchar('\n');
}
