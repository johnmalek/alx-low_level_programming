#include <stdlib.h>
#include "main.h"
/* 
 * isupper - function that checks for uppercase character
 * Return 1 if c is uppercase or 0 if not
 */
int is_upper(int c)
{

	for (char alph = 'A'; alph <= 'Z'; alph++)
	{
		if (c == alph)
			return 1;	
		else
			return 0;
	}
}
