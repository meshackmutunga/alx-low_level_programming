<<<<<<< HEAD
#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase, followed by a new line.
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
=======
#include "holberton.h"

/**
 * print_alphabet -  prints the alphabet, in lowercase, followed by a new line.
 * Return: 0
 */

void print_alphabet(void)
{
char abc = 'a';
do {
_putchar(abc);
abc++;
} while (abc <= 'z');
_putchar('\n');
}

>>>>>>> c83b3a9fb0c0fbeaa8f53045714e20a77e6a3868
