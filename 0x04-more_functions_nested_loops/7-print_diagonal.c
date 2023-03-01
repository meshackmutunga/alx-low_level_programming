<<<<<<< HEAD
#include "main.h"

/**
 * print_diagonal - printing lines diagonal
 * @n: input variable
 * Return: void
 */


=======
#include "holberton.h"
#include <stdio.h>

/**
 * print_diagonal - prints a diagonal line
 * @n: Determines how long the line will be
 * Return: no return
 */
>>>>>>> c83b3a9fb0c0fbeaa8f53045714e20a77e6a3868
void print_diagonal(int n)
{
	int i, j;

<<<<<<< HEAD
	if (n <= 0)
		_putchar('\n');
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}

=======
	if (n < 1)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			if ((n > 1) && (i > 1))
			{
				for (j = 1; j <= i - 1; j++)
				{
					_putchar(32);
				}
			}
			_putchar('\\');
			if (i != n)
			{
				_putchar('\n');
			}
		}
		_putchar('\n');
	}
>>>>>>> c83b3a9fb0c0fbeaa8f53045714e20a77e6a3868
}
