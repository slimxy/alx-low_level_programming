#include <stdio.h>

/**
* main - prints alphabet in lowercase,
* Return: Always 0 (Success)
*/
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
		putchar('\n');
	return (0);
}

