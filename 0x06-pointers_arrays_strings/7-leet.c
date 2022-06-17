#include "main.h"
#include <stdio.h>
/**
* leet - encodes a string into 1337
* @s: input string.
* Return: the pointer to dest.
*/

char *leet(char *s)
{
	int a = 0, x;
	int low_letters[] = {97, 101, 111, 116, 108};
	int up_letters[] = {65, 69, 79, 84, 76};
	int numbers[] = {52, 51, 48, 55, 49};

	while (*(s + a) != '\0')
	{
		for (x = 0; x < 5; x++)
		{
			if (*(s + a) == low_letters[x] || *(s + a) == up_letters[x])
			{
				*(s + a) = numbers[x];
				break;
			}
		}
		a++;
	}
	return (s);
}
