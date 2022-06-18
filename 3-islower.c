#include "main.h"
#include <stdio.h>
/**
* _islower - checks for lowercase
* @x: x is an ascii character
* Return: 1 if lowercase
*/

int _islower(int x)
{
	if (x >= 'a' && x <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
