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
<<<<<<< HEAD
	char s1[98] = "Hello ";
	char s2[] = "World!\n";
	char *ptr;

	printf("%s\n", s1);
	printf("%s", s2);
	ptr = _strncat(s1, s2, 1);
	printf("%s\n", s1);
	printf("%s", s2);
	printf("%s\n", ptr);
	ptr = _strncat(s1, s2, 1024);
	printf("%s", s1);
	printf("%s", s2);
	printf("%s", ptr);
	return (0);
=======
    char s1[98] = "Hello ";
    char s2[] = "World!\n";
    char *ptr;

    printf("%s\n", s1); // Hello
    printf("%s", s2); // World
    ptr = _strncat(s1, s2, 1); // Hello W
    printf("%s\n", s1);
    printf("%s", s2);
    printf("%s\n", ptr);
    ptr = _strncat(s1, s2, 1024);
    printf("%s", s1);
    printf("%s", s2);
    printf("%s", ptr);
    return (0);
>>>>>>> c83b3a9fb0c0fbeaa8f53045714e20a77e6a3868
}
