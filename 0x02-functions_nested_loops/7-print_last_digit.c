<<<<<<< HEAD
#include "main.h"
=======
#include "holberton.h"
>>>>>>> c83b3a9fb0c0fbeaa8f53045714e20a77e6a3868

/**
 * print_last_digit - Prints the last digit of a number.
 * @n: The number in question.
 *
 * Return: Value of the last digit.
 */
<<<<<<< HEAD
int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
		last_digit *= -1;

	_putchar(last_digit + '0');

	return (last_digit);
=======

int print_last_digit(int n)
{
int last_digit = n % 10;
if (last_digit < 0)
{
last_digit *= -1;
}
_putchar(last_digit + '0');
return (last_digit);
>>>>>>> c83b3a9fb0c0fbeaa8f53045714e20a77e6a3868
}
