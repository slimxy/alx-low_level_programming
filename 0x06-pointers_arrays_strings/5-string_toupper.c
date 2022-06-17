#include "main.h"
#include <stdio.h>
/**
* string_toupper - changes all lowercase letters of a string
* to uppercase
* @s: input string.
* Return: the pointer to dest.
*/

char *string_toupper(char *s)
{
	int a = 0;

	while (*(s + a) != '\0')
	{
		if ((*(s + a) >= 97) && (*(s + a) <= 122))
			*(s + a) = *(s + a) - 32;
		a++;
	}
	return (s);
}

