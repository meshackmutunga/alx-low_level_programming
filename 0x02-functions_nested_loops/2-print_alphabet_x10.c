<<<<<<< HEAD
#include "main.h"

/**
 * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase.
 */
void print_alphabet_x10(void)
{
	int count = 0;
	char letter;

	while (count++ <= 9)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
	}
}
=======
#include "holberton.h"

/**
 * print_alphabet_x10 -  prints 10 times the alphabet, in lowercase
 * Return: 0
 */

void print_alphabet_x10(void)
{
int count = 0;
while (count < 10)
{
char abc;
for (abc = 'a'; abc <= 'z'; abc++)
{
_putchar(abc);
}
count++;
_putchar('\n');
}

>>>>>>> c83b3a9fb0c0fbeaa8f53045714e20a77e6a3868
