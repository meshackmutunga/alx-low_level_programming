<<<<<<< HEAD
#include "main.h"

/**
 * _strcmp - Compares pointers to two strings.
 * @s1: A pointer to the first string to be compared.
 * @s2: A pointer to the second string to be compared.
 *
 * Return: If str1 < str2, the negative difference of
 * the first unmatched characters.
 *         If s1 == s2, 0.
 *         If s1 > s2, the positive difference of
 *         the first unmatched characters.
 */
int _strcmp(char *s1, char *s2)
{
	while ((*s1 && *s2) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
=======
#include<stdio.h>
#include "holberton.h"

/**
 * _strcmp - function that compares two strings
 * @s1: char
 * @s2: char
 * Return: j.
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int j = 0;

	for (; s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0'; i++)

	if (s1[i] != s2[i])
		j = s1[i] - s2[i];

	return (j);
>>>>>>> c83b3a9fb0c0fbeaa8f53045714e20a77e6a3868
}
