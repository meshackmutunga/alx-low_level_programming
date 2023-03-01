<<<<<<< HEAD
/*
 * File: 2-print_alphabet.c
 */

#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
=======
#include <stdio.h>
/**
 * main - Entry point
 * Return: 0.
 */
int main(void)
{
char abc;
for (abc = 'a'; abc <= 'z'; abc++)
putchar(abc);
putchar('\n');
return (0);
>>>>>>> c83b3a9fb0c0fbeaa8f53045714e20a77e6a3868
}
