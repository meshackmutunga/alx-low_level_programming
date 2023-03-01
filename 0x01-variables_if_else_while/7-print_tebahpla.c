<<<<<<< HEAD
/*
 * File: 7-print_tebahpla.c
 */

#include <stdio.h>

/**
 * main - Prints the lowercase alphabet in reverse.
 *
 * Return: Always 0.
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
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
for (abc = 'z'; abc >= 'a'; abc--)
putchar(abc);
putchar('\n');
return (0);
>>>>>>> c83b3a9fb0c0fbeaa8f53045714e20a77e6a3868
}
