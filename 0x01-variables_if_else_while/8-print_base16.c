#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: /**
 * main - main block
 * Description: prints all single digit numbers of base 10
 * Return: 0
 */
int main(void)
{
	char d = '0';

	while (d <= '9')
	{
		putchar(d);
		d++;
	}

	char c = 'a';

	while (c <= 'f')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}

