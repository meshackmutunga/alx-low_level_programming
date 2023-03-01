<<<<<<< HEAD
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int i, d, n, len, f, digit;

	i = 0;
	d = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && f == 0)
	{
		if (s[i] == '-')
			++d;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}

	if (f == 0)
		return (0);

	return (n);
=======
#include "holberton.h"

/**
 * _atoi - Convert a string to integer.
 * @s: char array string
 * Return: y
 */

int _atoi(char *s)
{
	int x;
	int y, z;

	y = 0;
	z = -1;
	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] == '-')
			z *= -1;

		if (s[x] > 47 && s[x] < 58)
		{
			if (y < 0)
				y = (y * 10) - (s[x] - '0');
			else
				y = (s[x] - '0') * -1;

			if (s[x + 1] < 48 || s[x + 1] > 57)
				break;
		}
	}
	if (z < 0)
		y *= -1;

	return (y);
>>>>>>> c83b3a9fb0c0fbeaa8f53045714e20a77e6a3868
}
