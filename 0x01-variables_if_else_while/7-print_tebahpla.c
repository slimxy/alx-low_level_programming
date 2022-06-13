#include <stdio.h>

/**
* main - prints the lowercase alphabet in reverse,
* Return: Always 0 (Success)
*/
int main(void)
{
	char chr;

	for (chr = 'z'; chr >= 'a'; chr--)
	{
		putchar(chr);
	}
	putchar('\n');
	return (0);
}
