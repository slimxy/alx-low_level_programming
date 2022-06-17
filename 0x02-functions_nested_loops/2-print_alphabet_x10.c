#include "main.h"
#include <stdio.h>
/**
* print_alphabet_x10 - print alphabet 10 times
* Return : void  successfull.
*/

void print_alphabet_x10(void)
{
	int amount = 0;
	char alpha = 'a';

	while (amount < 10)
	{
		amount = 'a';
		while (alpha <= 'z')
		{
			putchar(alpha);
			alpha++;
		}
		putchar('\n');
		amount++;
	}
	return ;
}
