<<<<<<< HEAD
#include "main.h"

/**
 * print_most_numbers - prints
 *
 * Return: void
 */


void print_most_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		if (!(c == '2' || c == '4'))
			_putchar(c);
=======
#include "holberton.h"
#include <stdio.h>

/**
 * print_most_numbers - prints numbers from 0 to 9, but 2 and 4
 *
 * Return: 0
 */
void print_most_numbers(void)
{
	int digit;

	for (digit = 48; digit < 58; digit++)
	{
		if ((digit != 50) && (digit != 52))
		{
			_putchar(digit);
		}
>>>>>>> c83b3a9fb0c0fbeaa8f53045714e20a77e6a3868
	}
	_putchar('\n');
}
