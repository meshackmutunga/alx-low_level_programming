<<<<<<< HEAD
#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; x < l ; x++)
	{
		dest[x] = src[x];
	}
	dest[l] = '\0';
=======
#include "holberton.h"
/**
 * _strcpy - Entry point.
 * @dest: Variable which will hold the string.
 * @src: Variable which holds the string.
 *
 * Return: 0.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
>>>>>>> c83b3a9fb0c0fbeaa8f53045714e20a77e6a3868
	return (dest);
}
