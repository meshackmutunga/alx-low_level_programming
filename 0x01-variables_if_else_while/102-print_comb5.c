<<<<<<< HEAD
/*
 * File: 102-print_comb5.c
 * Auth: Brennan D Baraban
 */

#include <stdio.h>

/**
 * main - Prints all possible combinations of two two-digit numbers,
 *        ranging from 0-99, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 <= 98; num1++)
	{
		for (num2 = num1 + 1; num2 <= 99; num2++)
		{
			putchar((num1 / 10) + '0');
			putchar((num1 % 10) + '0');
			putchar(' ');
			putchar((num2 / 10) + '0');
			putchar((num2 % 10) + '0');

			if (num1 == 98 && num2 == 99)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
=======
#include <stdio.h>
/**
* main - Entry point
*
* Return: 0
*/
int main(void)
{
int numLeft;
int numLast;
for (numLeft = 0; numLeft < 100; numLeft++)
{
for (numLast = 0; numLast < 100; numLast++)
{
if (numLeft < numLast)
{
putchar(numLeft / 10 + 48);
putchar(numLeft % 10 + 48);
putchar(32);
putchar(numLast / 10 + 48);
putchar(numLast % 10 + 48);
if (numLeft < 98)
{
putchar(44);
putchar(32);
}
}
}
}
putchar('\n');
return (0);
}

>>>>>>> c83b3a9fb0c0fbeaa8f53045714e20a77e6a3868
