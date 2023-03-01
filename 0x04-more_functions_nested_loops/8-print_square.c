<<<<<<< HEAD
#include "main.h"

/**
 * print_square - prints a square of size @size
 * @size: size of the square
 *
 * Return: void
 */


void print_square(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < (size); j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}

=======
#include "holberton.h"
#include <stdio.h>

/**
 * print_diagonal - prints a diagonal line
 * @n: Determines how long the line will be
 * Return: no return
 */
void print_diagonal(int n)
{
	int i, j;

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
