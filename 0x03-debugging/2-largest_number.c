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
}
