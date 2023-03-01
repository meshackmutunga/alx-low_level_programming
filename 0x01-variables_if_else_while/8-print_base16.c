<<<<<<< HEAD
/*
 * File: 8-print_base16.c
 */

#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase.
 * Return: Always 0.
 */
int main(void)
{
	int num;
	char letter;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
=======
#include <stdio.h>
/**
* main - Entry point
* Return: 0.
*/
int main(void)
{
char abc;
for (abc = '0'; abc <= '9'; abc++)
putchar(abc);
for (abc = 'a'; abc <= 'f'; abc++)
putchar(abc);
putchar('\n');
return (0);
}

>>>>>>> c83b3a9fb0c0fbeaa8f53045714e20a77e6a3868
