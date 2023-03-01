<<<<<<< HEAD
#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @str: string.
 *
 * Return: length.
 */
size_t _strlen(const char *str)
{
	size_t len = 0;

	while (*str++)
		len++;

	return (len);
=======
#include "holberton.h"
/**
 *_strlen - Entry point
 *@s: give me the word
 *Return: gave large
 */
int _strlen(char *s)
{
	int large = 0;

	while (*(s + large) != '\0')
	{
		large++;
	}
	return (large);
>>>>>>> c83b3a9fb0c0fbeaa8f53045714e20a77e6a3868
}
