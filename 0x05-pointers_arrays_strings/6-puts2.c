<<<<<<< HEAD
#include "main.h"
/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int longi = 0;
	int t = 0;
	char *y = str;
	int o;

	while (*y != '\0')
	{
		y++;
		longi++;
	}
	t = longi - 1;
	for (o = 0 ; o <= t ; o++)
	{
		if (o % 2 == 0)
	{
		_putchar(str[o]);
	}
=======
#include "holberton.h"
/**
 * puts2 - print strings in par position.
 * @str: Variable which holds the string.
 *
 * Return: Always 0 (Success)
 */
void puts2(char *str)
{
	int c = 0;
	int i;

	while (str[c] != '\0')
	{
		c++;
	}
	for (i = 0; i < c; i += 2)
	{
		_putchar(str[i]);
>>>>>>> c83b3a9fb0c0fbeaa8f53045714e20a77e6a3868
	}
	_putchar('\n');
}
