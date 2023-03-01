<<<<<<< HEAD
#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: string to be reserved.
 */
void rev_string(char *s)
{
	int i = 0, len = 0;
	char tmp;

	while (s[i++])
		len++;

	for (i = len - 1; i >= len / 2; i--)
	{
		tmp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = tmp;
=======
#include "holberton.h"
/**
 * rev_string - Entry point.
 * @s: Variable which holds the string.
 *
 * Return: 0
 */
void rev_string(char *s)
{
	int i;
	int size = 0;
	char rev[10000];

	while (s[size] != '\0')
	{
		size++;
	}
	size--;
	for (i = 0; i <= size; i++)
	{
		rev[i] = s[size - i];
	}
	for (i = 0; i <= size; i++)
	{
		s[i] = rev[i];
>>>>>>> c83b3a9fb0c0fbeaa8f53045714e20a77e6a3868
	}
}
