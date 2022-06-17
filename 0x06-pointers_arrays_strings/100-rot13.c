#include "main.h"
#include <stdio.h>
/**
* rot13 - encodes a string using rot13
* @s: input string.
* Return: the pointer to dest.
*/

char *rot13(char *s)
{
	int a = 0, x;
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + a) != '\0')
	{
		for (x = 0; x < 52; x++)
		{
			if (*(s + a) == alpha[x])
			{
				*(s + a) = rot13[x];
				break;
			}
		}
		a++;
	}
	return (s);
}
