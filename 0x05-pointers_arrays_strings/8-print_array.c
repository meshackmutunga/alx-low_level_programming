<<<<<<< HEAD
#include "main.h"

/**
 * print_array - a function that prints n elements of an array
 * @a: array name
 * @n: is the number of elements OF the array to be printed
 * Return: a and n inputs
=======
#include "holberton.h"
#include <stdio.h>
/**
 * print_array - Entry point.
 * @a: Array
 * @n: Number of elements specified to print.
 *
 * Return: 0.
>>>>>>> c83b3a9fb0c0fbeaa8f53045714e20a77e6a3868
 */
void print_array(int *a, int n)
{
	int i;

<<<<<<< HEAD
	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
		if (i == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
			printf("\n");
}

=======
	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
		printf("%d", a[i]);
		}
		else
		{
			printf("%d, ", a[i]);
		}
	}
	putchar('\n');
}
>>>>>>> c83b3a9fb0c0fbeaa8f53045714e20a77e6a3868
