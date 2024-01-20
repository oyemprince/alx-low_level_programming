#include "main.h"
/**
*more_numbers - prints numbers to 14
*
*Return: returns nothing
*/
void more_numbers(void)
{
	int number = 48;

	for (int i = 1; i <= 10; i++)
		{
			for (number = 48; number < 63; number++)
				{
					_putchar(number);
				}
			_putchar(10);
		}

}
