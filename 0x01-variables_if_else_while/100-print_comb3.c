<<<<<<< HEAD
/*
 * File: 100-print_comb3.c
 * Auth: Brennan D Baraban
 */

#include <stdio.h>

/**
 * main - Prints all possible combinations of two different digits,
 *        in ascending order, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int digit1, digit2;

	for (digit1 = 0; digit1 < 9; digit1++)
	{
		for (digit2 = digit1 + 1; digit2 < 10; digit2++)
		{
			putchar((digit1 % 10) + '0');
			putchar((digit2 % 10) + '0');

			if (digit1 == 8 && digit2 == 9)
				continue;
			
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
=======
#include <stdio.h>
/**
* main - Entry point
*
* Return: 0
*/
int main(void)
{
int numR;
int numL;
int minL = 48;
for (numL = 48; numL <= 57; numL++)
{
for (numR = minL++; numR <= 57; numR++)
{
if (numR != numL)
{
putchar(numL);
putchar(numR);
if (!(numR == 57 && numL == 56))
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
>>>>>>> c83b3a9fb0c0fbeaa8f53045714e20a77e6a3868
}
