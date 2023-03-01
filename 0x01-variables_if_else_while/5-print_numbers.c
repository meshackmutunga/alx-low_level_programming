<<<<<<< HEAD
/*
 * File: 5-print_numbers.c
 */

#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 starting from 0.
 *
 * Return: Always 0.
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		printf("%d", num);

	printf("\n");

	return (0);
=======
#include <stdio.h>
/**
* main - Entry point
* Return: 0.
*/
int main(void)
{
char num;
for (num = '0'; num <= '9'; num++)
putchar(num);
putchar('\n');
return (0);
>>>>>>> c83b3a9fb0c0fbeaa8f53045714e20a77e6a3868
}
