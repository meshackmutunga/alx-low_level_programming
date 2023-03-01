<<<<<<< HEAD
#include "main.h"

/**
 * print_line - printing lines
 * @n: number of times
 * Return: void
 */


=======
#include "holberton.h"
#include <stdio.h>

/**
 * print_line - prints a line
 * @n: Determines how long the line will be
 * Return: no return
 */
>>>>>>> c83b3a9fb0c0fbeaa8f53045714e20a77e6a3868
void print_line(int n)
{
	int i;

<<<<<<< HEAD
	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
=======
	if (n < 1)
	{

		_putchar('\n');

	}
	else
	{

		for (i = 1; i <= n; i++)
		{

			_putchar('_');
		}
		_putchar('\n');
	}
>>>>>>> c83b3a9fb0c0fbeaa8f53045714e20a77e6a3868
}
