<<<<<<< HEAD
/*
 * File: 2-largest_number.c
 */
#include "main.h"

/**
 * largest_number - returns the largest of the three numbers
 * @a: first int
 * @b: second int
 * @c: third integerst number
 *
 * Return: largest of the three.
 */

int largest_number(int a, int b, int c)
{int largest;

if (a > b && a > c)
{
largest = a;
}
else if (b > c)
{
largest = b;
}
else
{
largest = c;
}

return (largest);
=======
#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a >= b && a >= c)
	{
		largest = a;
	}
	else if (b >= a && b >= c)
	{
		largest = b;
	}
	else if (c >= a && c >= b)
	{
		largest = c;
	}

	return (largest);
>>>>>>> c83b3a9fb0c0fbeaa8f53045714e20a77e6a3868
}
