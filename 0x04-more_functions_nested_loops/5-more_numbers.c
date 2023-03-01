<<<<<<< HEAD
#include "main.h"

/**
 * more_numbers - nmbr fct
 * Return: no return
 */

void more_numbers(void)
{

int i, j;
	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j >= 10)
			_putchar('1');
			_putchar(j % 10 + '0');
		}
			_putchar('\n');
		}
=======
#include "holberton.h"
#include <stdio.h>

/**
 * more_numbers - prints numbers from 0 to 14 ten times
 * Return: no return
 */
void more_numbers(void)
{
	int row, column;

	for (row = 1; row <= 10; row++)
	{
		for (column = 0; column <= 14; column++)
		{
			if (column / 10 != 0)
			{
				_putchar('0' + column / 10);
			}
			_putchar('0' + column % 10);
		}
		_putchar('\n');
	}
>>>>>>> c83b3a9fb0c0fbeaa8f53045714e20a77e6a3868
}
