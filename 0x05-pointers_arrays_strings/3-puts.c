#include "main.h"
/**
* _puts - prints string
* @str: string
* Return: void
*/

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putschar(str[i]);
		i++;
	}
	_putschar('\n');
}
