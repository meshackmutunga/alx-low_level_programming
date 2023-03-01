<<<<<<< HEAD
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
=======
#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
>>>>>>> c83b3a9fb0c0fbeaa8f53045714e20a77e6a3868
 *
 * Return: Always 0.
 */
int main(void)
{
	char s1[98] = "Hello ";
	char s2[] = "World!\n";
	char *ptr;

	printf("%s\n", s1);
	printf("%s", s2);
	ptr = _strcat(s1, s2);
	printf("%s", s1);
	printf("%s", s2);
	printf("%s", ptr);
	return (0);
}
