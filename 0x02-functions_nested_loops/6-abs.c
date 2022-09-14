#include "main.h"
#include <stdio.h>

/**
 *_abs - function that computes the absolute value of an integer
 *@c: use for the argument for the argument of the function
 *Return: 0
 */

int _abs(int c)
{
	if (c > 0 ||  ==  0)
	{
		return (c);
	}
	else
		return (c + -1);
}

