#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - main block
 * Write a program that prints the lowercase alphabet in reverse,
 * followed by a new line.
 * Return: 0
 */
int main(void)
{
	char n = 'z';

	while (n >= 'a')
	{
		putchar(n);
		n--;
	}

	putchar('\n');
	return (0);
}

