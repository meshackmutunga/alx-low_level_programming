<<<<<<< HEAD
#include "main.h"

/**
 * _puts - Prints a string .
 * @str: string.
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

=======
#include "holberton.h"

/**
 * _puts - Entry point.
 *@str: the variable
 *
 */
void _puts(char *str)
{
	int msg;

	for (msg = 0; *(str + msg) != '\0'; msg++)
	{
		_putchar(str[msg]);
	}
>>>>>>> c83b3a9fb0c0fbeaa8f53045714e20a77e6a3868
	_putchar('\n');
}
