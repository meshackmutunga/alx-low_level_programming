<<<<<<< HEAD
/*
 * File: 101-print_comb4.c
 * Auth: Brennan D Baraban
 */

#include <stdio.h>

/**
 * main - Prints all possible combinations of three different digits,
 *        in ascending order, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int digit1, digit2, digit3;

	for (digit1 = 0; digit1 < 8; digit1++)
	{
		for (digit2 = digit1 + 1; digit2 < 9; digit2++)
		{
			for (digit3 = digit2 + 1; digit3 < 10; digit3++)
			{
				putchar((digit1 % 10) + '0');
				putchar((digit2 % 10) + '0');
				putchar((digit3 % 10) + '0');

				if (digit1 == 7 && digit2 == 8 && digit3 == 9)
					continue;
				
				putchar(',');
				putchar(' ');
			}
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
int numM;
for (numL = 48; numL <= 57; numL++)
{
for (numM = numL + 1; numM <= 57; numM++)
{
for (numR = numM + 1; numR <= 57; numR++)
{
if (numM != numR)
{
putchar(numL);
putchar(numM);
putchar(numR);
if (!(
numR == 57 && numM == 56 && numL == 55))
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
>>>>>>> c83b3a9fb0c0fbeaa8f53045714e20a77e6a3868
}
