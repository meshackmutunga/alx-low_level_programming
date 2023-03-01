<<<<<<< HEAD
#include "main.h"

/**
 * print_numbers - prints 0123456789\n
 * Return: void
 */


void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
=======
#include "holberton.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers from 0 to 9
 * void: No Input Parameter
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar('\n');
>>>>>>> c83b3a9fb0c0fbeaa8f53045714e20a77e6a3868
}
