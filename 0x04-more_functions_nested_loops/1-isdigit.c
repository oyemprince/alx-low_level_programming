#include "main.h"
#include <stdio.h>

/**
 * _isdigint() returns 0 if an input is not a digit
 *
 * Return: Always 0.
 */
int _isdigit(c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
