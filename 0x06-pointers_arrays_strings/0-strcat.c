<<<<<<< HEAD
#include "main.h"

/**
 * *_strcat - concatenates @src to @dest
 * @src: the source string to append to @dest
 * @dest: the destiation string to be concatenated upon
 * Return:pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	int index = 0;
	int dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];
	return (dest);
=======
#include "holberton.h"
/**
 * _strcat - Entry point.
 * @dest: Variable which will hold the string.
 * @src: Variable which holds the string.
 *
 * Return: 0.
 */
char *_strcat(char *dest, char *src)
{
	char *aux = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (aux);
>>>>>>> c83b3a9fb0c0fbeaa8f53045714e20a77e6a3868
}
