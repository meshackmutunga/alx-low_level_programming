<<<<<<< HEAD
#include "main.h"

/**
 * swap_int - swaps the values of int a and int b
 * @a: first int to swap
 * @b: second int to swap
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	 c = *a;
	*a = *b;
	*b = c;
=======
#include "holberton.h"
/**
 *swap_int - Entry point
 *
 *@a: give me a value
 *@b: give me another value
 *Return: 0.
 */
void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
>>>>>>> c83b3a9fb0c0fbeaa8f53045714e20a77e6a3868
}
