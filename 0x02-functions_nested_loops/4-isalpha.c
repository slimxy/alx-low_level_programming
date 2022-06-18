#include "main.h"

/**
* _isalpha - checks for alphabetic character
* @x: x is an ascii character
* Return: 1 (if letter)
*/

int _isalpha(int x)
{
	if (x >= 'a' && x <= 'z')
	{
		return (1);
	}
	else if (x >= 'A' && x <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
