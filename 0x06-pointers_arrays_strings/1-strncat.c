<<<<<<< HEAD
#include "main.h"

/**
 * _strncat - Concatenates two strings using at most
 *            an inputted number of bytes from src.
 * @dest: The string to be appended upon.
 * @src: The string to be appended to dest.
 * @n: The number of bytes from src to be appended to dest.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];
=======
#include "holberton.h"
/**
 * _strcat - Entry point.
 * @dest: Variable which will hold the string.
 * @src: Variable which holds the string.
 *@n: int
 * Return: dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	/*Declare and init vars*/
	int i;
	char *destPointer = dest;
	int len = 0;
	if (dest == 0)
	{
		return (0);
	}
	/*Lenght of string dest*/
	while (*dest)
	{
		len++;
		dest++;
	}
	dest = destPointer;
	for (i = 0; i < n && src[i]; i++)
	{
		dest[len + i] = src[i];
	}
	dest[len + i] = '\0';
>>>>>>> c83b3a9fb0c0fbeaa8f53045714e20a77e6a3868
	return (dest);
}
