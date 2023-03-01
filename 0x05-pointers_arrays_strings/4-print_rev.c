<<<<<<< HEAD
#include "main.h"
/**
 * print_rev - imprime en reversa
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int longi = 0;
	int o;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	s--;
	for (o = longi; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
=======
#include "holberton.h"
/**
 * print_rev - Entry point.
 *@s: the variable
 *
 */
void print_rev(char *s)
{
	char *aux = s;

	if (s)
	{
		while (*aux)
		{
			aux++;
		}
		while (s < aux--)
		{
			_putchar(*aux);
		}
		_putchar('\n');
	}
>>>>>>> c83b3a9fb0c0fbeaa8f53045714e20a77e6a3868
}
