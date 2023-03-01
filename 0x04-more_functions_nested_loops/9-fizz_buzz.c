<<<<<<< HEAD
#include <stdio.h>
#include "main.h"

/**
 * Description: prints the numbers 1 - 100 w/
 * Fizz for multiples of 3, Buzz for multiples of 5,
 * and FizzBuzz for multiples of both
 * Return: always 0
=======
#include "holberton.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
>>>>>>> c83b3a9fb0c0fbeaa8f53045714e20a77e6a3868
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
<<<<<<< HEAD
		if (i % 15 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%i", i);
		if (i < 100)
			printf(" ");
=======
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if ((i % 3 == 0) && (i % 5 != 0))
		{
			printf("Fizz");
		}
		else if ((i % 3 != 0) && (i % 5 == 0))
		{
			printf("Buzz");
		}
		else
		{
			printf("%i", i);
		}
		if (i != 100)
		{
			printf(" ");
		}
>>>>>>> c83b3a9fb0c0fbeaa8f53045714e20a77e6a3868
	}
	printf("\n");
	return (0);
}
