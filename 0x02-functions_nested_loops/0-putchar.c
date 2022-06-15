#include "main.h"
#include <stdio.h>
/**
* main - prints _putchar
* Return: 0 (Success)
*/

int main(void)
{
	char myText[9] = "_putchar";
	int i;

	i = 0;
	for (i = 0; i < 8; i++)
	{
		putchar(myText[i]);
	}
	putchar('\n');
	return (0);
}
