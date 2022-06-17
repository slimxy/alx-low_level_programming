#include "main.h"
#include <stdio.h>
/**
* _strcmp - compares two strings
* @s1: first string.
* @s2: second string.
* Return: 0 if s1 and s2 are equals,
* another number if not.
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}


