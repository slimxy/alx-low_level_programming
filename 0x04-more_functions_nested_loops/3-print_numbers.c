#include "main.h"
#include <stdio.h>
/**
* print_numbers - prints numbers 0-9
* Return: void
*/

void print_numbers(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
