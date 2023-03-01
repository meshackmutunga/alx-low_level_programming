<<<<<<< HEAD
#include "main.h"

/**
 * print_triangle - prints a triangle .
 * @size: size of triangle .
 * Return: void
 */


=======
#include "holberton.h"

/**
 * print_triangle - prints a triangle
 * @size: Determines how big the triangle
 *
 * Return: no return
 */
>>>>>>> c83b3a9fb0c0fbeaa8f53045714e20a77e6a3868
void print_triangle(int size)
{
	int i, j;

<<<<<<< HEAD
	if (size <= 0)
		_putchar('\n');
	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			if (j <= (size - i))
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}

=======
	if (size < 1)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				if ((j <= size - i))
				{
					_putchar(32);
				}
				else
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	}
>>>>>>> c83b3a9fb0c0fbeaa8f53045714e20a77e6a3868
}
